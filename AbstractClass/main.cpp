#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Octagon.h"

using std::cout;
using std::endl;

int main() 
{
    Triangle TrigOne(5, 7, 3, 4);
    Triangle *TrigP = &TrigOne;
    
    cout << "Периметр треугольника равен: " << TrigP -> Perimetr() << endl;
    cout << "Площадь треугольника равна: " << TrigP -> Area() << endl;
    
    cout << endl;
    
    Square SqrOne(4);
    Square *SqrP = &SqrOne;
    
    cout << "Периметр квадрата равен: " << SqrP -> Perimetr() << endl;
    cout << "Площадь квадрата равен: " << SqrP -> Area() << endl;
    
    cout << endl;
    
    Octagon OctOne(5);
    Octagon *OctP = &OctOne;
    
    cout << "Периметр восьмиугольника равен: " << OctP -> Perimetr() << endl;
    cout << "Площадь многоугольника равна: " << OctP -> Area() << endl;

    return 0;
}