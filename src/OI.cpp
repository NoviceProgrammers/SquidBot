#include "OI.h"
#include "robotmap.h"
#include "xb360map.h"
#include "Commands/cmdJoystickArcadeDrive.h"

OI::OI()
{
	m_Driver = new Joystick(0);


	m_ShooterHigh = new JoystickButton(m_Driver,XB360_A);
	m_ShooterHigh ->WhenPressed(new cmdShootBallHigh());
	m_ShooterMed  = new JoystickButton(m_Driver,XB360_B);
	m_ShooterMed  ->WhenPressed(new cmdShootBallMed());
	m_ShooterLow  = new JoystickButton(m_Driver,XB360_X);
	m_ShooterLow  ->WhenPressed(new cmdShootBallLow());
}

float OI::AxisX()
{
	return Filter(m_Driver->GetRawAxis(XB360_AXIS_X));
}

float OI::AxisY()
{
	return Filter(m_Driver->GetRawAxis(XB360_AXIS_Y));
}

float OI::Filter(float in)
{
	return ( (fabs(in) < FILTER_VALUE) ? 0 : in );
}
