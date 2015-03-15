#include "cmdJoystickArcadeDrive.h"
#include "robotmap.h"

cmdJoystickArcadeDrive::cmdJoystickArcadeDrive()
{
	Requires(base);
}

// Called just before this Command runs the first time
void cmdJoystickArcadeDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdJoystickArcadeDrive::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool cmdJoystickArcadeDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void cmdJoystickArcadeDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdJoystickArcadeDrive::Interrupted()
{

}
