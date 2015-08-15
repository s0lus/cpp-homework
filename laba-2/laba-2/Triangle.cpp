#include "Triangle.h"


Triangle::Triangle()
{
	m_a = 3.f;
	m_b = 4.f;
	m_c = 5.f;
}


Triangle::Triangle(float a, float b, float c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}


Triangle::~Triangle()
{
}


float Triangle::perimeter()
{
	return m_a + m_b + m_c;
}


float Triangle::areaGeron()
{
	float p = (m_a + m_b + m_c) / 2;
	return sqrtf(p * (p - m_a) * (p - m_b) * (p - m_c));
}