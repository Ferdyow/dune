DUNE: Unified Navigation Environment
======================================

DUNE: Unified Navigation Environment is a runtime environment for unmanned systems on-board software. It is used to write generic embedded software at the heart of the system, e.g. code or control, navigation, communication, sensor and actuator access, etc. It provides an operating-system and architecture independent platform abstraction layer, written in C++, enhancing portability among different CPU architectures and operating systems.

# Project TTK22
## Changes
- Changes are made to the IMC bindings using a [custom IMC version](https://github.com/ferdyow/imc). This includes an additional message with abbrev = EstimatedMugState.
- A simulated sensor is added to the Simulators and can be found in `src/Simulators/MUGDetectionCamera`.
- The simulated sensor is added to the Lauv-noptilus-1. These changes can be found in `etc/lauv-noptilus-1.ini`

## Compilation
The IMC bindings are changed to contain an additional IMC message to send the estimated state of detected Mini Underwater Gliders (MUGs) as well as their unique ID. If this is not working correctly the IMC bindings are updated using the following in the dune source folder:

```
	cmake -DIMC_URL=https://github.com/ferdyow/imc
	make imc_download
	make imc
```

Then in the build folder run

```
    make rebuild_cache
    make
```

## Running the simulated sensor
The simulator is tested by running a DUNE simulation of the lauv-noptilus-1. Neptus can be used in addition to control the AUV.

```
    cd dune/build && ./dune -c lauv-noptilus-1 -p Simulation
    cd neptus && ./neptus.sh auv
```

## Custom IMC Message
Estimated MUG State
This message presents the estimated position of a MUG as well as the MUGs ID if this has been detected.

The Position is given by a North-East-Down (NED)
local tangent plane displacement (x, y, z) relative to an absolute WGS-84 coordinate (latitude, longitude, height above ellipsoid). The z-coordinate is left out as this is assumed to be zero.
- Abbreviation: EstimatedMugState
- Identification Number: 2001
- Payload Size: 12 bytes
- Message Size: 34 bytes
- Flags: periodic

| Name          | Abbreviation  | Unit          | Type          | Description   | Range         |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Mug Identification  | id      | -             | int32_t       | The ID which uniquely determines which MUG has been located. | Same as field type |
| Offset North  | x             | m             | fp32_t        | The North offset of the North/East/Down field with respect to LLH | Same as field type |
| Offset East   | y             | m             | fp32_t        | The East offset of the North/East/Down field with respect to LLH. | Same as field type |

## MUGDetectionCamera

The Simulated camera has the following Arguments which are adjusted based on the camera to simulate:

- `double horizontalFieldofView`
- `double verticalFieldOfView`
- `int horizontalResolution`
- `int verticalResolution`

These are set in the .ini file of the vehicle and otherwise default to the values of the oCam-1cgn-u. 

The task consumes `IMC::EstimatedState` messages and dispatches `IMC::EstimatedMugState` messages. It currently also receives the Estimated Mug State to ensure that it is working as intended.

The MUG is currently always placed a fixed distance away from the AUVs current position. It is placed in `(x_{NED}, y_{NED}) = (1.0, 0.3)`. Everytime the estimated UAV state is received it checks if the MUGs location is within the image produced by using the camera properties together with the current altitude. A message is then printed saying if a MUG is visible or not. If a MUG is visible the latitude and longtitude of the MUG are converted to pixel values. This pixel value is then converted back to a point in NED while adding some error. Although this may seem redundant, it is done so the conversion from pixel value to NED can be equal in the simulator and a module which receives pixel values from a computer vision module. 

### Conversion between pixel values to centered coordinates in metres
Firstly, the coordinate system is moved to the center of the image using the following formulas:

```
    xPixel = xPixel - m_args.horizontalResolution/2;
    yPixel = yPixel - m_args.verticalResolution/2;
```

The number of metres contained within an image can be found by the formulas given below. The distance in each direction is found by finding the bottom length of a right-angled triangle with an angle of half the field of view. The height is simply the altitude which is also a known value. 

```
    double metresInX = 2 * abs(uavState.alt) * tan ( m_args.horizontalFieldOfView/2 * PI/180);
    double metresInY = 2 * abs(uavState.alt) * tan ( m_args.verticalFieldOfView/2 * PI/180);
```

When these values are known, they can simply be multiplied by at what percentage of the axis the point is located.

```
    xMetres = metresInX * xPixel/m_args.horizontalResolution;
    yMetres = metresInY * yPixel/m_args.verticalResolution;
```

To do the opposite operations, similar formulas are used.

### Conversion from the camera frame to the NED frame
An assumption is made that the camera is aligned with the UAV such that the positive x-axis of the vehicle is the cameras negative y-axis and the positive y-axis of the vehicle is the positive x-axis of the camera. Finding the NED coordinate system is then a simple rotation of -y. The rotation rotates the negative y camera axis to the x NED axis, and the x camera axis to the y NED axis. The formulas for this are given below.

```
    void
    CameraFrameToNedCoordinates(double xCam, double yCam, double heading, double &xNED, double &yNED)
    {
        xNED = -yCam * cos(heading) + xCam * sin(heading);
        yNED =  yCam * sin(heading) + xCam * cos(heading);
    }
```

To do the reverse, one can simple transpose the rotation matrix, providing a similar formula. 

### Simulated error
The error is simulated by using the height of the vehicle together with the resolution values to determine the maximum error. An error is then added to both the x and y value by using a uniform distribution that is between the negative and positive maximum error value. The maximum error is found by multiplying with the height and resolution and dividing by a normalising factor. The normalising factor is based on that a height of 10 metres should result in +- 0.5 m of error with some variation due to the difference in resolution. More testing is necessary to improve this function. 
