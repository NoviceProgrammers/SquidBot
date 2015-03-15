#ifndef OI_H
#define OI_H

#include "WPILib.h"
class OI
{
private:
	Joystick *m_Driver;

	JoystickButton *m_ShooterHigh;
	JoystickButton *m_ShooterMed;
	JoystickButton *m_ShooterLow;


	float Filter( float in );

public:
	OI();

	float AxisX();
	float AxisY();

};

#endif
