#ifndef cmdPushBall_H
#define cmdPushBall_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdPushBall: public CommandBase
{
public:
	cmdPushBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
