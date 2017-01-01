#include <iostream>
#include <cmath>

#include "Rectangle.h"

using namespace std;

int main() 
{
    Rectangle recOne(5, 6);
    Rectangle recTwo;         // в C++ такой синтаксис подходит для создания объекта 
                             // и для объявления функции без аргументов, 
                            // в таких случаях он выбирает объявление.

    recOne.getArea();
    recOne.getPerimeter();
    recOne.getDiagonal();
    
    cout << endl;
    
    recTwo.getArea();
    recTwo.getPerimeter();
    recTwo.getDiagonal();

    return 0;
}