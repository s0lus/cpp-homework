#include "Triangle.h"

Triangle::Triangle(double sideA, double sideB, double sideC, double sideH)
{
    a = sideA;
    b = sideB;
    c = sideC;
    h = sideH;
}

double Triangle::Perimeter()
{
   return (a + b + c);
}

double Triangle::Area()
{
    return 1 / (2 * a * h);
}