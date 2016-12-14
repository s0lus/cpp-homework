#include <math.h>
#include "Octagon.h"

Octagon::Octagon(double sideA)
{
    a = sideA;
}

double Octagon::Perimetr()
{
    return 8 * a;
}

double Octagon::Area()
{
    return 2 * (1 + sqrt(2)) * a * a;
}