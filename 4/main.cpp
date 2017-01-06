#include <iostream>

#include "Rectangle.h"

int main() 
{
    Rectangle recOne(5, 6);
    Rectangle recTwo;

    recOne.getArea();
    recOne.getPerimeter();
    recOne.getDiagonal();
    
    std::cout << std::endl;
    
    recTwo.getArea();
    recTwo.getPerimeter();
    recTwo.getDiagonal();

    return 0;
}