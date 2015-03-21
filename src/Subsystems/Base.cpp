#include "Base.h"
#include "../RobotMap.h"
#include "../Commands/cmdJoystickArcadeDrive.h"
Base::Base() :
		Subsystem("Base")
{
	m_LF = new CANTalon(MOTOR_LF_CIM);
	m_RF = new CANTalon(MOTOR_RF_CIM);
	m_LR = new CANTalon(MOTOR_LR_CIM);
	m_RR = new CANTalon(MOTOR_RR_CIM);

	m_LF->SetVoltageRampRate(WHEEL_MOTOR_RAMP_RATE);
	m_RF->SetVoltageRampRate(WHEEL_MOTOR_RAMP_RATE);
	m_LR->SetVoltageRampRate(WHEEL_MOTOR_RAMP_RATE);
	m_RR->SetVoltageRampRate(WHEEL_MOTOR_RAMP_RATE);

	//m_LF = frontLeftMotor;
	//m_RF = frontRightMotor;
	//m_LR = rearLeftMotor;
//	m_RR = rearRightMotor;

	m_drive = new RobotDrive(m_LF, m_RF, m_LR, m_RR);
}

void Base::InitDefaultCommand()
{
	SetDefaultCommand(new cmdJoystickArcadeDrive());
}

void Base::ArcadeDrive(float moveValue, float rotateValue)
{
	m_drive->ArcadeDrive(float moveValue, float rotateValue, true);
}

void Base::ArcadeDrive(float moveValue, float rotateValue, int driveIndex)
{

}
