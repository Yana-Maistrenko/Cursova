#pragma once
#include "AbstractTarget.h"
class HumanTarget :
	public AbstractTarget
{
public:
	HumanTarget();
	virtual ~HumanTarget();
	int shoot(int x, int y);
	int[] center();
};

