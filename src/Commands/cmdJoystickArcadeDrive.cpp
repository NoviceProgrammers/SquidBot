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
	static int x = 0;
		if ( (++x % 10) == 0)
			std::cout << "Arcade " << oi->AxisY() << "," << oi->AxisX() << " ctr: " << x << "\r\n";
	base->ArcadeDrive( oi->AxisY()*MAX_JOYSTICK_DRIVE, oi->AxisX()*MAX_JOYSTICK_DRIVE );
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
