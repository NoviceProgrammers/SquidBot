#include "BallShooter.h"
#include "../RobotMap.h"

BallShooter::BallShooter() :
		Subsystem("BallShooter")
{
	m_BBS = new CANTalon(MOTOR_S_BB);
	m_Loader = new DoubleSolenoid(SOL_LOADER_SHOOT, SOL_LOADER_LOAD);

	m_BBS ->SetVoltageRampRate(SHOOT_MOTOR_RAMP_RATE);
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

void BallShooter::ExtendDoubleArms()
{
	m_Loader->Set(DoubleSolenoid::kForward);
}

void BallShooter::RetractDoubleArms()
{
	m_Loader->Set(DoubleSolenoid::kReverse);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
