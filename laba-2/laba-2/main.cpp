#include <iostream>

#include "Triangle.h"

int main()
{
	Triangle trig1(6.3f, 4.9f, 7.9f);
	Triangle trig2(7.3f, 5.6f, 7.6f);
	Triangle trig3;

	std::cout << "Perimeter: " << trig1.perimeter() << "\n";
	std::cout << "Perimeter: " << trig2.perimeter() << "\n";
	std::cout << "Perimeter: " << trig3.perimeter() << "\n";

	std::cout << "Area: " << trig1.areaGeron() << "\n";
	std::cout << "Area: " << trig2.areaGeron() << "\n";
	std::cout << "Area: " << trig3.areaGeron() << "\n";

	std::cin.get();

	return 0;
}