#include <iostream>


#include "Vector.h"


int main()
{

	Vector vec1(2.5f, 3.4f);
	Vector vec2(3.4f, 5.6f);

	std::cout << "Length vec1: " << vec1.length() << "\n";
	std::cout << "Length vec2: " << vec2.length() << "\n";

	std::cin.get();

	return 0;
}