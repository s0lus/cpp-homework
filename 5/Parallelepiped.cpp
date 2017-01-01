#include "Parallelepiped.h"
#include "Rectangle.h"

Parallelepiped::Parallelepiped(int A, int B, int C, int H):Rectangle(A, B)
{
	SetSideABCH(A, B, C, H);
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

int Parallelepiped::getDiagonalParallelepiped()
{
	int resultDiagonal = sqrt(a * a + b * b + c * c);

	return resultDiagonal;
}