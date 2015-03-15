#ifndef cmdShootBallMed_H
#define cmdShootBallMed_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdShootBallMed: public CommandBase
{
public:
	cmdShootBallMed();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
