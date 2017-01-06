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

    return resultArea;
}

int Rectangle::getPerimeter()
{
   int resultPerimeter = 2 * (a + b);

   return resultPerimeter;
}

double Rectangle::getDiagonal()
{
   double resultDiagonal = sqrt(a * a + b * b);

   return resultDiagonal;
}
