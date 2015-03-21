#include <Commands/cmdRetractCylinder.h>

RetractCylinder::RetractCylinder()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void RetractCylinder::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void RetractCylinder::Execute()
{
	shooter->RetractDoubleArms();
}

// Make this return true when this Command no longer needs to run execute()
bool RetractCylinder::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void RetractCylinder::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RetractCylinder::Interrupted()
{

}
