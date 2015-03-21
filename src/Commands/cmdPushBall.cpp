#include "cmdPushBall.h"

cmdPushBall::cmdPushBall()
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void cmdPushBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdPushBall::Execute()
{
	shooter->ExtendDoubleArms();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdPushBall::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdPushBall::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdPushBall::Interrupted()
{

}
