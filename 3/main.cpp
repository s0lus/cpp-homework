#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Octagon.h"


int main() 
{
    Triangle TrigOne(5, 7, 3, 4);
    Triangle *TrigP = &TrigOne;
    
    std::cout << "Периметр треугольника равен: " << TrigP->Perimeter() << std::endl;
    std::cout << "Площадь треугольника равна: " << TrigP -> Area() << std::endl;
    
    std::cout << std::endl;
    
    Square SqrOne(4);
    Square *SqrP = &SqrOne;
    
    std::cout << "Периметр квадрата равен: " << SqrP->Perimeter() << std::endl;
    std::cout << "Площадь квадрата равен: " << SqrP -> Area() << std::endl;
    
    std::cout << std::endl;
    
    Octagon OctOne(5);
    Octagon *OctP = &OctOne;
    
    std::cout << "Периметр восьмиугольника равен: " << OctP->Perimeter() << std::endl;
    std::cout << "Площадь многоугольника равна: " << OctP -> Area() << std::endl;

    return 0;
}