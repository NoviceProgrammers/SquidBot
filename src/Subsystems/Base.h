#ifndef Base_H
#define Base_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Base: public Subsystem
{
private:
	CANTalon *m_LF, *m_LR, *m_RF, *m_RR;
	RobotDrive *m_drive;
public:
	Base();
	void InitDefaultCommand();
	void ArcadeDrive(float moveValue, float rotateValue);
};

#endif
