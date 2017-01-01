#include "CreateFile.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void CreateFile()
{
    Point myPoint;
    Point PointWithKeyBoard;
    
    fstream file("file", fstream::in | fstream::out | fstream::trunc | fstream::binary);
    
    int n;      //количество точек в файле
    int d = 0; //расстояние
    
    srand(time(NULL));
    
    cout << "Введите количество точек в файле: ";
    cin >> n;
    
    int arrayofDistance[n];
    
    cout << "Введите точку с клавиатуры: ";
    cin >> PointWithKeyBoard.x >> PointWithKeyBoard.y;
    cout << "Введеная точка: " << "(" << PointWithKeyBoard.x << "," << PointWithKeyBoard.y << ")" << endl;
    
    for(int i = 0; i < n; i++)
    {
        myPoint.x = rand() % 10;
        myPoint.y = rand() % 10;
        
        file.write((const char*) &myPoint, sizeof(myPoint));  
    }

    file.seekg(0, fstream::beg);
    while(!file.eof())
    {
        file.read((char*) &myPoint, sizeof(myPoint));
        
        cout << "(" << myPoint.x << "," << myPoint.y << ")" << " ";
        
        d = sqrt( (myPoint.x - PointWithKeyBoard.x) * (myPoint.x - PointWithKeyBoard.x) + 
                  (myPoint.y - PointWithKeyBoard.y) * (myPoint.y - PointWithKeyBoard.y)  );

        for(int i = 0; i != n; i++)
        {
                arrayofDistance[i] = d;
                cout << arrayofDistance[i] << endl;
                break;
        }
    }
    file.close();
}