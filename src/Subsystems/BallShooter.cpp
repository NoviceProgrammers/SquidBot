#include "BallShooter.h"
#include "../RobotMap.h"

BallShooter::BallShooter() :
		Subsystem("BallShooter")
{
	m_BBS = new CANTalon(MOTOR_S_BB);
	m_Loader = new DoubleSolenoid(SOL_LOADER_SHOOT, SOL_LOADER_LOAD);
}
void BallShooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void BallShooter::ShootBallHigh()
{
	m_BBS -> Set(SHOOT_SPEED_HIGH);
}

void BallShooter::ShootBallMed()
{
	m_BBS -> Set(SHOOT_SPEED_MED);
}

void BallShooter::ShootBallLow()
{
	m_BBS -> Set(SHOOT_SPEED_LOW);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
