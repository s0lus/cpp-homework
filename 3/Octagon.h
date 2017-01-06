#ifndef OCTAGON_H
#define	OCTAGON_H

#include <cmath>

#include "RegularPolygon.h"

class Octagon: public RegularPolygon
{
public:
    Octagon(double sideA);
    double Perimeter();
    double Area();
private:
    double a;
};

#endif	/* OCTAGON_H */