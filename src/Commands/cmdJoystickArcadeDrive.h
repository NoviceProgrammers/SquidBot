#ifndef cmdJoystickArcadeDrive_H
#define cmdJoystickArcadeDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdJoystickArcadeDrive: public CommandBase
{
public:
	cmdJoystickArcadeDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
