#pragma once
#include "AbstractTarget.h"
class CircleTarget :
	public AbstractTarget
{
public:
	CircleTarget();
	virtual ~CircleTarget();
	int shoot(int x, int y);
	int[] center();
};

