#ifndef Base_H
#define Base_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Base: public Subsystem
{
private:
	CANTalon *m_LF, *m_LR, *m_RF, *m_RR;
public:
	Base();
	void InitDefaultCommand();
};

#endif
