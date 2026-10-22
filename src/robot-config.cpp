#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor LeftMotor = motor(PORT10, ratio18_1, false);
motor RightMotor = motor(PORT5, ratio18_1, true);
motor ArmMotor = motor(PORT3, ratio18_1, false);
motor ClawMotor = motor(PORT4, ratio18_1, false);

void vexcodeInit( void ) {
  // nothing to initialize
}