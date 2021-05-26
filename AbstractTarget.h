#pragma once
template<int W, int H>
class AbstractTarget
{
	int rad;//Радиус круглой мишени (или головы)
	int target[W][H];
public:
	AbstractTarget();
	virtual ~AbstractTarget();
	virtual int shoot(int x, int y);//Метод стрелять
	virtual int[] center();//Метод, возвращающий координаты центра

};

