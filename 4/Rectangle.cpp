Rectangle::Rectangle(int A, int B)
{
	SetSideAB(A, B);
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

	cout << "Площадь прямоугольника: " << resultArea << endl;

	return resultArea;
}

int Rectangle::getPerimeter()
{
	int resultPerimeter = 2 * (a + b);

	cout << "Периметр прямоугольника: " << resultPerimeter << endl;

	return resultPerimetr;
}

int Rectangle::getDiagonal()
{
	int resultDiagonal = sqrt(a * a + b * b);

	cout << "Длина диагоналей прямоугольника: " << resultDiagonal << endl;

	return resultDiagonal;
}