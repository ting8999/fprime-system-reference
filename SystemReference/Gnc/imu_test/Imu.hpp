// ======================================================================
// \title  Imu.hpp
// \author ting
// \brief  hpp file for Imu component implementation class
// ======================================================================

#ifndef Gnc_Imu_HPP
#define Gnc_Imu_HPP

#include "SystemReference/Gnc/imu_test/ImuComponentAc.hpp"

namespace Gnc {

  class Imu :
    public ImuComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct Imu object
      Imu(
          const char* const compName //!< The component name
      );

      //! Destroy Imu object
      ~Imu();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for Run
      //!
      //! Port to send telemetry to ground
      void Run_handler(
          FwIndexType portNum, //!< The port number
          U32 context //!< The call order
      ) override;

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for commands
      // ----------------------------------------------------------------------

      //! Handler implementation for command PowerSwitch
      //!
      //! Command to turn on the device
      void PowerSwitch_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Gnc::PowerState powerState
      ) override;

  };

}

#endif
