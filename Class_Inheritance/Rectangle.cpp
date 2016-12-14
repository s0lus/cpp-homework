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

//---------------------------------------------------------//

Parllepiped::Parllepiped(int A, int B, int C, int H):Rectangle(A, B)
{
    SetSideABCH(A, B, C, H);
}

Parllepiped::Parllepiped()
{
    a = 5;
    b = 9;
    c = 7;
    h = 3;
}

void Parllepiped::SetSideABCH(int sideA, int sideB, int sideC, int height)
{
    a = sideA;
    b = sideB;
    c = sideC;
    h = height;    
}

int Parllepiped::getVolume()
{
    int resultVolume = GetArea() * h;
    
    return resultVolume;
}

int Parllepiped::getDiagonalParllepiped()
{
    int resultDiagonal = sqrt(a * a + b * b + c * c);
    
    return resultDiagonal;
}