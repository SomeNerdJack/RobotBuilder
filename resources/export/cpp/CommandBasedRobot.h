#ifndef _ROBOT_H
\#define _ROBOT_H

\#include "WPILib.h"
\#include "Commands/Command.h"
\#include "RobotMap.h"
\#include "LiveWindow.h"

#@autogenerated_code("includes", "")
#parse("${exporter-path}CommandBasedRobot-includes.h")
#end
\#include "OI.h"

class Robot : public IterativeRobot {
public:
  Command *autonomousCommand;
  static OI *oi;
#@autogenerated_code("declarations", "  ")
#parse("${exporter-path}CommandBasedRobot-declarations.cpp")
#end
  virtual void RobotInit();
  virtual void AutonomousInit();
  virtual void AutonomousPeriodic();
  virtual void TeleopInit();
  virtual void TeleopPeriodic();
};
#endif
