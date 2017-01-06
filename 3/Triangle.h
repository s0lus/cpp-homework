#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "RegularPolygon.h"

class Triangle: public RegularPolygon
{
public:
    Triangle(double sideA, double sideB, double sideC, double sideH);
    double Perimeter();
    double Area();
private:
    double a, b, c, h;
};

#endif	/* TRIANGLE_H */