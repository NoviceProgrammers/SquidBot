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
}

void Base::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
