#ifndef cmdShootBallHigh_H
#define cmdShootBallHigh_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdShootBallHigh: public CommandBase
{
public:
	cmdShootBallHigh();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
