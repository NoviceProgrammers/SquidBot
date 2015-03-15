#include "OI.h"
#include "robotmap.h"
#include "xb360map.h"
#include "Commands/cmdJoystickArcadeDrive.h"

OI::OI()
{
	m_Driver = new Joystick(0);
}
