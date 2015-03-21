#ifndef BallShooter_H
#define BallShooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallShooter: public Subsystem
{
private:
	CANTalon *m_BBS;
	DoubleSolenoid *m_Loader;
public:
	BallShooter();
	void InitDefaultCommand();
	void ShootBallHigh();
	void ShootBallMed();
	void ShootBallLow();
	void ExtendDoubleArms();
	void RetractDoubleArms();
};

#endif
