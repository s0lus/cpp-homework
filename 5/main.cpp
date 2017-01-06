#include <iostream>
#include "Rectangle.h"
#include "Parallelepiped.h"

int main() 
{
    Rectangle recOne(5, 6);
    Rectangle recTwo;
    
    std::cout << "Площадь прямоугольника: " << recOne.getArea() << std::endl;
    std::cout << "Периметр прямоугольника: " << recOne.getPerimeter() << std::endl;
    std::cout << "Длина диагоналей прямоугольника: " << recOne.getDiagonal() << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Площадь прямоугольника: " << recTwo.getArea() << std::endl;
    std::cout << "Периметр прямоугольника: " << recTwo.getPerimeter() << std::endl;
    std::cout << "Длина диагоналей прямоугольника: " << recTwo.getDiagonal() << std::endl;
    
    std::cout << std::endl;
    
    Parallelepiped parOne(5, 6, 3, 4);
    Parallelepiped parTwo;
    
    std::cout << "Объем параллепипеда: " << parOne.getVolume() << std::endl;
    std::cout << "Длина диагоналей параллепипеда: " << parOne.getDiagonalParallelepiped() << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Объем параллепипеда: " << parTwo.getVolume() << std::endl;
    std::cout << "Длина диагоналей параллепипеда:" << parTwo.getDiagonalParallelepiped() << std::endl;
      
    return 0;
}