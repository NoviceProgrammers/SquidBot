#ifndef RetractCylinder_H
#define RetractCylinder_H

#include "../CommandBase.h"
#include "WPILib.h"

class RetractCylinder: public CommandBase
{
public:
	RetractCylinder();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
