#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
public:
    Rectangle(int A, int B);
    Rectangle();
    ~Rectangle() {}
    void SetSideAB(int sideA, int sideB);
    int GetArea();
    int GetPerimiter();
    int GetDiagonal(); 
    
private:
    int a, b;
};

Rectangle::Rectangle(int A, int B)
{
    SetSideAB(A, B);
}

Rectangle::Rectangle()
{
    a = 5;
    b = 10;
}

void Rectangle::SetSideAB(int sideA, int sideB)
{
    a = sideA;
    b = sideB;
}

int Rectangle::GetArea()
{
    int resultArea = a * b;
    
    cout << "Площадь прямоугольника: " << resultArea << endl;
    
    return resultArea;
}

int Rectangle::GetPerimiter()
{
   int resultPerimetr = 2 * (a + b);
   
   cout << "Периметр прямоугольника: " << resultPerimetr << endl;
   
   return resultPerimetr;
}

int Rectangle::GetDiagonal()
{
    int resultDiagonal = sqrt(a * a + b * b);
    
    cout << "Длина диагоналей прямоугольника: " << resultDiagonal << endl;

    return resultDiagonal;    
}

int main() 
{
    Rectangle recOne(5, 6);
    Rectangle recTwo;         // в C++ такой синтаксис подходит для создания объекта 
                             // и для объявления функции без аргументов, 
                            // в таких случаях он выбирает объявление.


    recOne.GetArea();
    recOne.GetPerimiter();
    recOne.GetDiagonal();
    
    cout << endl;
    
    recTwo.GetArea();
    recTwo.GetPerimiter();
    recTwo.GetDiagonal();

    return 0;
}