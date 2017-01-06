#ifndef RECTANGLE_H
#define	RECTANGLE_H

#include <iostream>
#include <cmath>

class Rectangle
{
public:
    Rectangle(int A, int B);
    Rectangle();
    ~Rectangle() {}
    
    void setSideAB(int sideA, int sideB);
    int getArea();
    int getPerimeter();
	double getDiagonal();
    
private:
    int a, b;
};

#endif	/* RECTANGLE_H */