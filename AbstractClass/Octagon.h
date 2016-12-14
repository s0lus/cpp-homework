#ifndef OCTAGON_H
#define	OCTAGON_H

#include "RegularPolygon.h"

class Octagon: public RegularPolygon
{
public:
    Octagon(double sideA);
    double Perimetr();
    double Area();
private:
    double a;
};

#endif	/* OCTAGON_H */