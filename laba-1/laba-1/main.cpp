#include <iostream>

#include "fraction.h"

int main()
{
	Fraction fract(1324, 324);

	fract.print();
	std::cout << "gcd: " << fract.gcd(1324, 324) << "\n\n";
	fract.simplify();

	std::cin.get();

	return 0;
}