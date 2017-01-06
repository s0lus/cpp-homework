#include "Rectangle.h"

Rectangle::Rectangle(int A, int B)
{
	setSideAB(A, B);
}

Rectangle::Rectangle()
{
	a = 5;
	b = 10;
}

void Rectangle::setSideAB(int sideA, int sideB)
{
	a = sideA;
	b = sideB;
}

int Rectangle::getArea()
{
	int resultArea = a * b;

	std::cout << "Площадь прямоугольника: " << resultArea << std::endl;

	return resultArea;
}

int Rectangle::getPerimeter()
{
	int resultPerimeter = 2 * (a + b);

	std::cout << "Периметр прямоугольника: " << resultPerimeter << std::endl;

	return resultPerimeter;
}

double Rectangle::getDiagonal()
{
	double resultDiagonal = sqrt(a * a + b * b);

	std::cout << "Длина диагоналей прямоугольника: " << resultDiagonal << std::endl;

	return resultDiagonal;
}