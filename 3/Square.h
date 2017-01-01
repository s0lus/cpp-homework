#ifndef SQUARE_H
#define	SQUARE_H

#include "RegularPolygon.h"

class Square: public RegularPolygon
{
public:
    Square(int sideA);
    double Perimetr();
    double Area();
private:
    double a, b;
};

#endif	/* SQUARE_H */