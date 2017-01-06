#include <iostream>
#include <cmath>

#include "Rectangle.h"

class Parallelepiped: public Rectangle
{
public:
	Parallelepiped(int A, int B, int C, int H);
	Parallelepiped();
	~Parallelepiped() {}

	void setSideABCH(int sideA, int sideB, int sideC, int height);
	int getVolume();
	double getDiagonalParallelepiped();

private:
	int a, b, c, h;
};