#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void MaxMinElements(int iArray[], int size_iArray)
{
    int MaxEl = *(iArray + 0);
    int MinEl = *(iArray + 0);
    
    for (int i = 1; i < size_iArray; i++)
    {
       // if (iArray[i] > MaxEl)
         //   MaxEl = iArray[i];
        
        if (*(iArray + i) > MaxEl)
            MaxEl = *(iArray+i);
        
    //    if (iArray[i] < MinEl)
      //      MinEl = iArray[i];
       
        if (*(iArray + i) < MinEl)
            MinEl = *(iArray+i);
    }
    
    cout << "Максимальный элемент: ";
    cout << MaxEl << endl;
    cout << "Минимальный элемент: ";
    cout << MinEl << endl;
    cout << "Их произведение: " << MaxEl * MinEl << endl;
}

int main()
{
    int size_array = 10;
    int Array[size_array];
       
    srand(time(NULL));
    
    for (int i = 0; i < size_array; i++)
    {
        Array[i] = rand() % 100 - 50;
        cout << Array[i] << " ";
    }
    cout << endl;
    MaxMinElements(Array, size_array);
    cout << endl;
    
    int ArrayTwo[12][8];
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            ArrayTwo[i][j] = rand() % 100 - 50;
            cout << setw(3) << ArrayTwo[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 3; i < 12; i = i + 3)
    {
        cout << endl;
        cout << "Строка: " << i << endl;
        MaxMinElements(ArrayTwo[i], 8);
    }
     
    return 0;
}