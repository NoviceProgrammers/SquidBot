#ifndef cmdShootBallLow_H
#define cmdShootBallLow_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdShootBallLow: public CommandBase
{
public:
	cmdShootBallLow();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
