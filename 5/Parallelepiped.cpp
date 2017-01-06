#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(int A, int B, int C, int H):Rectangle(A, B)
{
	setSideABCH(A, B, C, H);
}

Parallelepiped::Parallelepiped()
{
	a = 5;
	b = 9;
	c = 7;
	h = 3;
}

void Parallelepiped::setSideABCH(int sideA, int sideB, int sideC, int height)
{
	a = sideA;
	b = sideB;
	c = sideC;
	h = height;
}

int Parallelepiped::getVolume()
{
	int resultVolume = getArea() * h;

	return resultVolume;
}

double Parallelepiped::getDiagonalParallelepiped()
{
	double resultDiagonal = sqrt(a * a + b * b + c * c);

	return resultDiagonal;
}