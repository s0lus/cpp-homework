#include "Vector.h"


Vector::Vector()
{
}


Vector::Vector(float x, float y)
{
	m_x = x;
	m_y = y;
}


Vector::~Vector()
{
}


float Vector::length()
{
	return sqrtf(m_x * m_x + m_y * m_y);
}