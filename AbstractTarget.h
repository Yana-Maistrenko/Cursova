#pragma once
template<int W, int H>
class AbstractTarget
{
	int rad;//������ ������� ������ (��� ������)
	int target[W][H];
public:
	AbstractTarget();
	virtual ~AbstractTarget();
	virtual int shoot(int x, int y);//����� ��������
	virtual int[] center();//�����, ������������ ���������� ������

};

