#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() 
{
    //Rectangle recOne(5, 6);
    Rectangle recTwo;
    
//    cout << "Площадь прямоугольника: " << recOne.GetArea() << endl;
//    cout << "Периметр прямоугольника: " << recOne.GetPerimiter() << endl;
//    cout << "Длина диагоналей прямоугольника: " << recOne.GetDiagonal() << endl;
    
    cout << endl;
    
    cout << "Площадь прямоугольника: " << recTwo.GetArea() << endl;
    cout << "Периметр прямоугольника: " << recTwo.GetPerimiter() << endl;
    cout << "Длина диагоналей прямоугольника: " << recTwo.GetDiagonal() << endl;
    
    cout << endl;
    
   // Parllepiped parOne(5, 6, 3, 4);
    Parllepiped parTwo;
    
//    cout << "Объем параллепипеда: " << parOne.getVolume() << endl;
//    cout << "Длина диагоналей параллепипеда: " << parOne.getDiagonalParllepiped() << endl;
    
    cout << endl;
    
    cout << "Объем параллепипеда: " << parTwo.getVolume() << endl;
    cout << "Длина диагоналей параллепипеда:" << parTwo.getDiagonalParllepiped() << endl;
      
    return 0;
}