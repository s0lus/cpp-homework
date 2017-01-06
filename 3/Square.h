#ifndef SQUARE_H
#define	SQUARE_H

#include "RegularPolygon.h"

class Square: public RegularPolygon
{
public:
    Square(int sideA);
    double Perimeter();
    double Area();
private:
    double a;
};

#endif	/* SQUARE_H */