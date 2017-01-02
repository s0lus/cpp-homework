#include "fraction.h"

Fraction::Fraction()
{
	m_numerator = 1;
	m_denominator = 3;
}

Fraction::Fraction(int numeration, int denominator)
{
	m_numerator = numeration;
	m_denominator = denominator;
}


Fraction::~Fraction()
{
}


void Fraction::print() const
{
	std::cout << "fraction: " << m_numerator << "/" << m_denominator << "\n\n";
}


void Fraction::simplify()
{
	int temp_gcd = gcd(m_numerator, m_denominator);
	m_numerator /= temp_gcd;
	m_denominator /= temp_gcd;

	if (m_denominator < 0)
	{
		m_numerator = -1;
		m_denominator = -1;
	}

	std::cout << "simplify fraction: " << m_numerator << "/" << m_denominator << "\n\n";
}


int Fraction::gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, (a % b));
}