//***************************************************************************
// Copyright 2018 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and OceanScan - Marine Systems &           *
// Technology, Lda. For licensing terms, conditions, and further            *
// information contact info@oceanscan-mst.com.                              *
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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "Parser.hpp"

namespace Sensors
{
  //! Device driver for Nortek's DVL.
  namespace NortekDVL
  {
    using DUNE_NAMESPACES;

    //! Data input timeout.
    static const double c_data_timeout = 8.0;
    //! Data port offset.
    static const unsigned c_data_port = 2;

    //! Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Sampling rate.
      float rate;
      //! True to enable automatic activation/deactivation based on medium.
      bool auto_activation;
      //! DVL position.
      std::vector<float> pos;
      //! DVL orientation.
      std::vector<float> ang;
      //! Enable input trigger.
      bool input_trigger;
      //! Trigger type
      std::string type_trigger;
      //! Name of sidescan's power channel.
      std::string power_channel;
      //! Bottom Tracker's blanking distance.
      float blank;
      //! Power Level
      float power;
      //! Hardware Debug Mode.
      bool debug;
      //! Enable Current Profiler
      bool cp_enable;
      //! Current profiler at every N pings
      unsigned cp_npings;
      //! Current profiler's number of cells.
      unsigned cp_ncells;
      //! Current profiler's cell size.
      float cp_csize;
      //! Current profiler's blanking distance.
      float cp_blank;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! IO device handle.
      IO::Handle* m_handle;
      //! IO device Handle for TCP data socket.
      IO::Handle* m_data_h;
      //! Driver.
      Driver* m_driver;
      //! Parser.
      Parser* m_parser;
      //! Medium handler.
      Monitors::MediumHandler m_hand;
      //! Watchdog.
      Counter<double> m_wdog;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Filtered DVL entity.
      unsigned m_entity;
      //! True if pings are externally triggered.
      bool m_triggered;
      //! True if we're using serial link.
      bool m_serial;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_data_h(NULL),
        m_driver(NULL),
        m_parser(NULL),
        m_triggered(false),
        m_serial(false)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_DEVELOPER);

        // Define configuration parameters.
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Sampling Rate", m_args.rate)
        .defaultValue("5.0")
        .minimumValue("1.0")
        .maximumValue("8.0")
        .units(Units::Hertz)
        .description("Device sampling rate");

        param("Automatic Activation", m_args.auto_activation)
        .defaultValue("true")
        .description("Operator is able to control device");

        param("Device Position", m_args.pos)
        .defaultValue("0.50, 0, 0.20")
        .size(3)
        .units(Units::Meter)
        .description("Device position relative to navigation estimation (relative to GPS sensor)");

        param("Device Orientation", m_args.ang)
        .defaultValue("0, -90, 45")
        .size(3)
        .units(Units::Degree)
        .description("Device orientation");

        param("Enable Input Trigger", m_args.input_trigger)
        .defaultValue("false")
        .description("Enable input trigger");

        param("Input Trigger Type", m_args.type_trigger)
        .defaultValue("TTLFALL")
        .values("TTLRISE, TTLFALL")
        .description("Type of input trigger.");

        param("Power Channel", m_args.power_channel)
        .defaultValue("Private (DVL)")
        .description("Name of device's power channel");

        param("Hardware Debug Mode", m_args.debug)
        .defaultValue("false")
        .description("Record data internally with diagnostics");

        param("Power Level", m_args.power)
        .defaultValue("-2.0")
        .minimumValue("-20.0")
        .maximumValue("-2.0")
        .units(Units::Decibel)
        .description("Device Power Level");

        param("Blanking Distance", m_args.blank)
        .defaultValue("0.01")
        .minimumValue("0.01")
        .maximumValue("5.0")
        .units(Units::Meter)
        .description("Blanking Distance for the bottom tracker");

        param("Current Profiler -- Enabled", m_args.cp_enable)
        .defaultValue("false")
        .description("Enable current profiler");

        param("Current Profiler -- Get At Nth Ping", m_args.cp_npings)
        .defaultValue("20")
        .minimumValue("2")
        .maximumValue("20")
        .description("Collect current profiles at each Nth ping (0 to disable)");

        param("Current Profiler -- Number of Cells", m_args.cp_ncells)
        .defaultValue("10")
        .minimumValue("1")
        .maximumValue("200")
        .description("Number of cells available for the current profiler");

        param("Current Profiler -- Cell Size", m_args.cp_csize)
        .defaultValue("1.0")
        .minimumValue("0.2")
        .maximumValue("2.0")
        .units(Units::Meter)
        .description("Cell size for the current profiler");

        param("Current Profiler -- Blanking Distance", m_args.cp_blank)
        .defaultValue("0.5")
        .minimumValue("0.1")
        .maximumValue("28.0")
        .units(Units::Meter)
        .description("Blanking Distance for the current profiler");

        setPostPowerOnDelay(5.0);
        setPowerOffDelay(1.0);

        bind<IMC::PulseDetectionControl>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.power_channel))
        {
          clearPowerChannelNames();
          addPowerChannelName(m_args.power_channel);
        }

        if (isActive())
        {
          if (paramChanged(m_args.rate) || paramChanged(m_args.blank) || paramChanged(m_args.cp_enable))
          {
            onInitializeDevice();
          }
          else if (m_args.cp_enable)
          {
            if (paramChanged(m_args.cp_ncells) || paramChanged(m_args.cp_csize) ||
                paramChanged(m_args.cp_npings) || paramChanged(m_args.cp_blank))
              onInitializeDevice();
          }
        }
      }

      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < c_beam_count; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_entity = reserveEntity("DVL Filtered");
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        // Indicate to parser if device is in water.
        if (isParserOn())
        {
          if (m_hand.isWaterSurface() || m_hand.isUnderwater())
            m_parser->setWater(true);
          else
            m_parser->setWater(false);
        }

        if (!m_args.auto_activation)
          return;

        // Request activation.
        if (m_hand.isWaterSurface() || m_hand.isUnderwater())
        {
          if (canRequestActivation())
            requestActivation();
        }

        // Request deactivation.
        if (m_hand.outWater())
        {
          if (isActive())
            requestDeactivation();

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        // Medium is unknown.
        if (!m_hand.isKnown() && m_hand.changed())
        {
          if (isActive())
            setEntityState(getEntityState(), Status::CODE_NO_MEDIUM_ACTIVE);
          else
            setEntityState(getEntityState(), Status::CODE_NO_MEDIUM_IDLE);

          err("%s", DTR(Status::getString(Status::CODE_NO_MEDIUM)));
        }
      }

      void
      consume(const IMC::PulseDetectionControl* msg)
      {
        if (!m_args.input_trigger)
          return;

        if (msg->op == IMC::PulseDetectionControl::POP_ON)
          m_triggered = true;
        else if (msg->op == IMC::PulseDetectionControl::POP_OFF)
          m_triggered = false;

        if (isConnected())
        {
          m_driver->setInputTrigger(m_triggered);
          m_wdog.reset();
        }
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (isConnected())
        {
          m_driver->setSalinity(msg->value);
          m_wdog.reset();
        }
      }

      //! Check if our IO device is a TCP socket.
      //! @return true if IO device is a TCP socket, false otherwise.
      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.io_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        // Create two TCP sockets, the first for command link,
        // the second to parse the data coming from the device.
        TCPSocket* sock = new TCPSocket;
        sock->setNoDelay(true);
        sock->setSendTimeout(1.0);
        sock->setReceiveTimeout(1.0);
        sock->connect(addr, port);
        m_handle = sock;

        TCPSocket* data_sock = new TCPSocket;
        data_sock->setNoDelay(true);
        data_sock->setSendTimeout(1.0);
        data_sock->setReceiveTimeout(1.0);
        data_sock->connect(addr, port + c_data_port);
        m_data_h = data_sock;
        m_serial = false;

        setup();

        if (!m_driver->login())
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);

        return true;
      }

      //! Test if the task can request activation.
      //! @return true if we can request activation, false otherwise.
      bool
      canRequestActivation(void)
      {
        return !(isActive() || isActivating());
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void)
      {
        consumeMessages();

        try
        {
          if (!openSocket())
          {
            // The serial port is used as command link and data.
            m_handle = new SerialPort(m_args.io_dev, m_args.uart_baud);
            m_data_h = m_handle;
            m_serial = true;
            setup();
          }
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }

      //! Test if connection exists with device.
      //! @return true if a connection exists, false otherwise.
      bool
      isConnected(void)
      {
        return m_driver != NULL;
      }

      //! Test if we have an active parser.
      //! @return true if we have a parser, false otherwise.
      bool
      isParserOn(void)
      {
        return m_parser != NULL;
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData(void)
      {
        if (!isParserOn())
          return false;

        if (m_parser->readData())
        {
          m_wdog.reset();
          return true;
        }

        if (m_wdog.overflow())
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);

        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect(void)
      {
        Memory::clear(m_parser);
        Memory::clear(m_driver);
        Memory::clear(m_handle);

        if (!m_serial)
          Memory::clear(m_data_h);
      }

      void
      onInitializeDevice(void)
      {
        if (isConnected())
        {
          unsigned pings = m_args.cp_enable ? m_args.cp_npings : 0;

          m_driver->reset(m_args.rate, m_args.blank, pings, m_args.cp_ncells,
                          m_args.cp_csize, m_args.cp_blank);

          std::string error;
          if (!m_driver->setup(error))
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)) + error, 5);

          m_wdog.setTop(c_data_timeout);
        }
      }

      //! This derived task has direct log control.
      //! @return true if it has log control, false otherwise.
      bool
      enableLogControl(void)
      {
        return true;
      }

      //! Open log file.
      //! @param[in] path path to log file.
      void
      onOpenLog(const DUNE::FileSystem::Path& path)
      {
        if (isParserOn())
          m_parser->openLog(m_ctx.dir_log / path);
      }

      //! Close log file.
      void
      onCloseLog(void)
      {
        if (isParserOn())
          m_parser->closeLog();
      }

      //! Setup driver and parser.
      void
      setup(void)
      {
        unsigned pings = m_args.cp_enable ? m_args.cp_npings : 0;

        m_driver = new Driver(this, m_handle, m_args.rate, m_args.blank, m_args.power,
                              m_triggered, m_args.type_trigger, m_args.debug, pings,
                              m_args.cp_ncells, m_args.cp_csize, m_args.cp_blank);

        m_parser = new Parser(this, m_data_h, m_args.pos, m_args.ang, m_entities, m_entity);
      }
    };
  }
}

DUNE_TASK
