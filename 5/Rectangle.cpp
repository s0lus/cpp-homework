#include <iostream>
#include <cmath>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int A, int B)
{
    SetSideAB(A, B);
}

Rectangle::Rectangle()
{
    a = 5;
    b = 10;
}

void Rectangle::SetSideAB(int sideA, int sideB)
{
    a = sideA;
    b = sideB;
}

int Rectangle::GetArea()
{
    int resultArea = a * b;
    
    return resultArea;
}

int Rectangle::GetPerimiter()
{
   int resultPerimetr = 2 * (a + b);
    
   return resultPerimetr;
}

int Rectangle::GetDiagonal()
{
   int resultDiagonal = sqrt(a * a + b * b);
    
   return resultDiagonal;    
}
