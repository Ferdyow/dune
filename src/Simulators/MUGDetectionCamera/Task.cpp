//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ferdy Wessing                                                    *
//***************************************************************************

// DUNE headers.
// Open folder DUNE with vscode so this works
#include <DUNE/DUNE.hpp>
#include <cmath>
#include <random>

namespace Simulators
{

  #define PI 3.14159265

  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Ferdy Wessing
  namespace MUGDetectionCamera
  {
    using DUNE_NAMESPACES;
    struct Arguments
    {
      double horizontalFieldOfView; // 92.8 degrees
      double verticalFieldOfView; // 50 degrees
      int horizontalResolution; // 1280 pixels
      int verticalResolution; // 960 pixels
    };

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;
      IMC::EstimatedState currentUavState;

      double mugLat, mugLon;
      double mugLatSim, mugLonSim;
      bool mugPositionSet = false;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        //param
        param("Camera - Horizontal FOV", m_args.horizontalFieldOfView)
        .defaultValue("92.8")
        .units(Units::Degree)
        .description("The cameras horizontal field of view");

        param("Camera - Vertical FOV", m_args.verticalFieldOfView)
        .defaultValue("50")
        .units(Units::Degree)
        .description("The cameras vertical field of view");

        param("Camera - horizontal resolution", m_args.horizontalResolution)
        .defaultValue("1280")
        .description("Horizontal resolution of the camera");

        param("Camera - vertical resolution", m_args.verticalResolution)
        .defaultValue("960")
        .description("Vertical resolution of the camera");


        bind<IMC::EstimatedState>(this);
        bind<IMC::EstimatedMugState>(this);
      }



      void
      consume(const IMC::EstimatedState* uavState)
      {
          currentUavState = *uavState;
          currentUavState.alt = 10;
          // Set currentUavState to absolute latitude and longtitude
          Coordinates::WGS84::displace(currentUavState.x, currentUavState.y, &currentUavState.lat, &currentUavState.lon);
          currentUavState.x = 0;
          currentUavState.y = 0;

          // Set MUG position to be close to UAV position the first time a message is received
          if(!mugPositionSet){
            mugLatSim = currentUavState.lat, mugLonSim = currentUavState.lon;
            Coordinates::WGS84::displace(1.0, 0.3, &mugLatSim, &mugLonSim);
            mugPositionSet = true;
          }


          // Check distance. if within FOV publish
          if(isMugVisible(currentUavState)){
            err("MUG is visible\n\n\n");

            // TRUE POSITION TO PIXELS
            int xPixel, yPixel;
            trueStateToPixelValues(currentUavState, mugLatSim, mugLonSim, xPixel, yPixel);
            //war("Pixel values: [%d, %d]", xPixel, yPixel);
            

            // PIXELS TO ESTIMATED POSITION
            double xNED, yNED;
            pixelValueToEstimatedState(currentUavState, xPixel, yPixel, xNED, yNED);
            
            int mugId = getMugId();
            err("NED Position: [%f, %f], MUG ID: %d)\n\n\n", xNED, yNED, mugId);

            
            // Add the offset to the MUG
            //mugLat = currentUavState.lat;
            //mugLon = currentUavState.lon;
            //Coordinates::WGS84::displace(xNED, yNED, &mugLat, &mugLon);

            IMC::EstimatedMugState mugMessage;
            mugMessage.id = mugId;
            mugMessage.x = xNED;
            mugMessage.y = yNED;
            dispatch(mugMessage, DF_LOOP_BACK);
          } 
          else{
            err("MUG is not visible\n\n\n");
          }
      }

      void
      consume(const IMC::EstimatedMugState* mugState)
      {
        war("Estimated Mug State received");
        war("mug state: id = %d, x = %f, y = %f", mugState->id, mugState->x, mugState->y);
      }

      bool
      isMugVisible(IMC::EstimatedState uavState)
      {

          double myLat = uavState.lat, myLon = uavState.lon; 
          
          double xDistance, yDistance, zDistance;

          // Set absolute latitude and longtitude
          Coordinates::WGS84::displace(uavState.x, uavState.y, &myLat, &myLon);
          uavState.x = 0;
          uavState.y = 0;

          // Compare the NED displacement between UAV and MUG
          Coordinates::WGS84::displacement(myLat, myLon,0, mugLatSim, mugLonSim,0, &xDistance, &yDistance, &zDistance);

          
          // Actually want to take the orientation of the camera into consideration as well. convert to x,y in NED
          double distanceVisibleX = uavState.alt * tan ( m_args.horizontalFieldOfView/2 * PI/180);
          double distanceVisibleY = uavState.alt * tan ( m_args.verticalFieldOfView/2 * PI/180);

          //war("UAV location: [%f, %f, %f]", uavState.x, uavState.y, uavState.alt);
          war("\nxDistance: %f, yDistance: %f ", xDistance, yDistance);
          war("visibleDistance: %f %f\n", distanceVisibleX, distanceVisibleY);

          if (abs(xDistance) < abs(distanceVisibleX) && abs(yDistance) <  abs(distanceVisibleY)){
            return true;
          }
          return false;
      }


    void
    trueStateToPixelValues(IMC::EstimatedState uavState, double mugLatTrue, double mugLonTrue, int &xPixel, int &yPixel)
    {
        double xDistanceSim, yDistanceSim, zDistanceSim;
        double xCam, yCam;
         
        // Get displacement
        Coordinates::WGS84::displacement(uavState.lat, uavState.lon, 0, mugLatTrue, mugLonTrue, 0, &xDistanceSim, &yDistanceSim, &zDistanceSim);
        err("NED coordinates: [%f, %f], heading: %f", xDistanceSim, yDistanceSim, uavState.psi);

        // get Camera frame coordinates from NED
        NedToCameraFrameCoordinates(xDistanceSim, yDistanceSim, currentUavState.psi, xCam, yCam);
        err("Camera frame coordinates: [%f, %f]", xCam, yCam);

        // Convert to pixel coordinate
        metresToPixels(uavState, xCam, yCam, xPixel, yPixel);
        err("Center pixel coordinates: [%d, %d]", xPixel, yPixel);

        // Move coordinate system to image corner
        getCornerImageCoordinates(xPixel, yPixel);
        err("Corner pixel coordinates: [%d, %d]", xPixel, yPixel);
    }

    void
    pixelValueToEstimatedState(IMC::EstimatedState uavState, int xPixel, int yPixel, double &xNED, double &yNED)
    {
        double xMetres, yMetres;

        // Move coordinate system from image corner to image center
        getCenteredImageCoordinates(xPixel, yPixel);
        err("Centered pixel coordinates: [%d, %d]", xPixel, yPixel);

        // Convert to Metre coordinate system
        pixelsToMetres(uavState, xPixel, yPixel, xMetres, yMetres);
        err("Camera frame coordinates: [%f, %f]", xMetres, yMetres);

        // Get coordinates in NED coordinate system
        CameraFrameToNedCoordinates(xMetres, yMetres, uavState.psi, xNED, yNED);
        err("NED Coordinates: [%f, %f]", xNED, yNED);

        simulateError(currentUavState.alt, xNED, yNED);
    }


      void
      pixelsToMetres(IMC::EstimatedState uavState, int xPixel, int yPixel, double &xMetres, double &yMetres)
      {
          double metresInX = 2 * abs(uavState.alt) * tan ( m_args.horizontalFieldOfView/2 * PI/180);
          double metresInY = 2 * abs(uavState.alt) * tan ( m_args.verticalFieldOfView/2 * PI/180);

          xMetres = metresInX/m_args.horizontalResolution * xPixel;
          yMetres = metresInY/m_args.verticalResolution * yPixel;
          //err("Total distance visible: [%f, %f]\nDistance to object: [%f, %f]", metresInX, metresInY, xMetres, yMetres);
      }


            void
      metresToPixels(IMC::EstimatedState uavState, double xMetres, double yMetres, int &xPixel, int &yPixel)
      {
          double metresInX = 2 * abs(uavState.alt) * tan ( m_args.horizontalFieldOfView/2 * PI/180);
          double metresInY = 2 * abs(uavState.alt) * tan ( m_args.verticalFieldOfView/2 * PI/180);

          err("Height: 10m, metres in image: [%f, %f]", metresInX, metresInY);
          xPixel = xMetres / metresInX * m_args.horizontalResolution;
          yPixel = yMetres / metresInY * m_args.verticalResolution;
      }

      void
      getCenteredImageCoordinates(int &xPixel, int &yPixel)
      {
        xPixel = xPixel - m_args.horizontalResolution/2;
        yPixel = yPixel - m_args.verticalResolution/2;
      }

      void
      getCornerImageCoordinates(int &xPixel, int &yPixel){
        xPixel = xPixel + m_args.horizontalResolution/2;
        yPixel = yPixel + m_args.verticalResolution/2;
      }

      void
      CameraFrameToNedCoordinates(double xCam, double yCam, double heading, double &xNED, double &yNED)
      {
          xNED = -yCam * cos(heading) + xCam * sin(heading);
          yNED =  yCam * sin(heading) + xCam * cos(heading);
      }

      void
      NedToCameraFrameCoordinates(double xNED, double yNED, double heading, double &xCam, double &yCam)
      {
          xCam =  xNED * sin(heading) + yNED * cos(heading);
          yCam = -xNED * cos(heading) + yNED * sin(heading);
      }

      
      void
      simulateError(double altitude, double &xNED, double &yNED)
      {
          double xError, yError;
          double avgResolution = 0.5 * (m_args.horizontalResolution + m_args.verticalResolution);
          // normalised with 10m and 1000 pixels, random in two directions
          double normalisingFactor = 2*10*avgResolution;

          // Error should be related to: height and number of pixels
          xError = altitude * m_args.horizontalResolution / normalisingFactor;
          yError = altitude * m_args.verticalResolution / normalisingFactor;

          war("Max error size: [%f, %f]", xError, yError);

          std::default_random_engine generator;
          std::uniform_real_distribution<double> xDistribution(-xError, xError);
          std::uniform_real_distribution<double> yDistribution(-yError, yError);
          xNED += xDistribution(generator);
          yNED += yDistribution(generator);

          
      }
      
      int
      getMugId()
      {
        return 1;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
