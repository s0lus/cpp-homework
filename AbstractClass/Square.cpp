#include "Square.h"

Square::Square(int sideA)
{
    a = sideA;
}

double Square::Perimetr()
{
    return 4 * a;
}

double Square::Area()
{
    return a * a;
}