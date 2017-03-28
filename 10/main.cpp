#include <iostream>
#include <fstream>
#include <cstdlib>

#define size_arr 25

int main()
{
    std::ofstream input("file");
    int size;
    int k, i;
    int nat_num[size_arr];

    srand(time(NULL));

    std::cout << "Сколько чисел внести в файл? " << std::endl;
    std::cout << "-> ";
    std::cin >> size;

    for (i = 0; i < size; i++) {
        nat_num[i] = rand() % 10;
        input << nat_num[i] << ' ';
    }

    std::cout << "Введите число для проверки кратности " << std::cin;
    std::cout << "-> ";
    std::cin >> k;

    std::ifstream output("file");
    std::ofstream result("result");

    std::cout << "Полученная последовательность, полсе проверки кратности: ";
    while (!output.eof()) {
        output >> nat_num[i];

        for (i = 0; i < size; i++) {
            if (nat_num[i] % k != 0) {
                result << nat_num[i] << std::endl;
                std::cout << nat_num[i] << ' ';
            }
        }
    }

    std::cout << std::endl;

    input.close();
    output.close();
    result.close();

    return 0;
}