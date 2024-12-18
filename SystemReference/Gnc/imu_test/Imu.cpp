// ======================================================================
// \title  Imu.cpp
// \author ting
// \brief  cpp file for Imu component implementation class
// ======================================================================

#include "FpConfig.hpp"
#include "SystemReference/Gnc/imu_test/Imu.hpp"

namespace Gnc {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Imu ::
    Imu(const char* const compName) :
      ImuComponentBase(compName)
  {

  }

  Imu ::
    ~Imu()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void Imu ::
    Run_handler(
        FwIndexType portNum,
        U32 context
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void Imu ::
    PowerSwitch_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Gnc::PowerState powerState
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
