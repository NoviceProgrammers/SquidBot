#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *m_Driver;

public:
	OI();
	float DriveX();
	float DriveY();
	float DriveZ();

	float DriveXR();
	float DriveYR();
};

#endif
