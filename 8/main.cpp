#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

void MaxMin(float *iArray, int size_iArray, float &Max, float &Min)
{   
    float LMax = iArray[0], LMin = 10;
    
    for (int i = 1; i < size_iArray; i++)
    {
        if (iArray[i] > LMax)
            LMax = iArray[i];
        if (iArray[i] < LMin)
            LMin = iArray[i];
    }
    
    Max = LMax;
    Min = LMin;
    
    cout << endl;
    cout << "Максимальный элемент: " << Max << endl;
    cout << "Минимальный элемент: " << Min << endl;
}

int main() 
{
    int size = 10;
    float result = 0;
    float Array_A[size], Array_B[size], Array_C[size];
    float MaxA = 0, MinA = 0;
    float MaxB = 0, MinB = 0;
    float MaxC = 0, MinC = 0;
    
    srand(time(NULL));
    
    cout << "Массив А: ";
    for (int i = 0; i < size; i++)
    {
        Array_A[i] = (rand() % 100) * 0.1;
        cout << setw(4) << Array_A[i] << " ";
    }
    
    cout << endl;
    cout << "Массив B: ";
    for (int i = 0; i < size; i++)
    {
        Array_B[i] = (rand() % 100) * 0.1;
        cout << setw(4) << Array_B[i] << " ";
    }
    
    cout << endl;
    cout << "Массив C: ";
    for (int i = 0; i < size; i++)
    {
        Array_C[i] = Array_A[i] + Array_B[i]; 
        cout << setw(4) << Array_C[i] << " ";        
    }
   
    cout << endl;
    
    MaxMin(Array_A, size, MaxA, MinA);
    MaxMin(Array_B, size, MaxB, MinB);
    MaxMin(Array_C, size, MaxC, MinC);
    
    cout << endl;
    
    result = ( (MaxA * MinC) - MaxB ) / MaxC + (MinA * MinB);
    
    cout << "Результат: " << result << endl;
    
    return 0;
}