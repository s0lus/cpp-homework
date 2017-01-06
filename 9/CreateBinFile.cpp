#include "CreateBinFIle.h"

using namespace std;

void createBinFile()
{
    fstream binFile("file", fstream::in | fstream::out | fstream::trunc| fstream::binary);
    
    int n; // количество чисел в файле
    int myN; // число вводимое с клавиатуры
    int rand_number;
    
    srand(time(NULL));
    
    cout << "Сколько чисел записать в файл?" << endl;
    cout << "-> ";
    cin >> n; 
   
    for (int i = 1; i < n; i++)
    {
       rand_number = rand() % 20 - 10;
       binFile.write((const char*) &rand_number, sizeof(int));  
    }
     
    binFile.seekg(0, fstream::beg);
    while(!binFile.eof())
    {
        binFile.read((char*) &rand_number, sizeof(int));
        cout << rand_number << " ";
    }
    
    cout << endl;
    cout << "Введите число: ";
    cin >> myN;
    
    binFile.close();
}