#include "cmdShootBallHigh.h"

cmdShootBallHigh::cmdShootBallHigh()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void cmdShootBallHigh::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdShootBallHigh::Execute()
{
	shooter->ShootBallHigh();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdShootBallHigh::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void cmdShootBallHigh::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdShootBallHigh::Interrupted()
{

}
