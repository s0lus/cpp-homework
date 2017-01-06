#include "CreateFile.h"

void createFile()
{
    Point myPoint;
    Point PointWithKeyBoard;
    
    std::fstream file("file", std::fstream::in | std::fstream::out | std::fstream::trunc | std::fstream::binary);
    
    int n;      //количество точек в файле
    double d = 0; //расстояние
    
    srand(time(NULL));
    
    std::cout << "Введите количество точек в файле: ";
    std::cin >> n;

    double arrayOfDistance[n];
    
    std::cout << "Введите точку с клавиатуры: ";
    std::cin >> PointWithKeyBoard.x >> PointWithKeyBoard.y;
    std::cout << "Введеная точка: " << "(" << PointWithKeyBoard.x << "," << PointWithKeyBoard.y << ")" << std::endl;
    
    for(int i = 0; i < n; i++)
    {
        myPoint.x = rand() % 10;
        myPoint.y = rand() % 10;
        
        file.write((const char*) &myPoint, sizeof(myPoint));  
    }

    file.seekg(0, std::fstream::beg);
    while(!file.eof())
    {
        file.read((char*) &myPoint, sizeof(myPoint));
        
        std::cout << "(" << myPoint.x << "," << myPoint.y << ")" << " ";
        
        d = sqrt( (myPoint.x - PointWithKeyBoard.x) * (myPoint.x - PointWithKeyBoard.x) + 
                  (myPoint.y - PointWithKeyBoard.y) * (myPoint.y - PointWithKeyBoard.y)  );

        for(int i = 0; i != n; i++)
        {
                arrayOfDistance[i] = d;
                std::cout << arrayOfDistance[i] << std::endl;
                break;
        }
    }
    file.close();
}