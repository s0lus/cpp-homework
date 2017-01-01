#pragma once

#include <cmath>

class Triangle
{
private:
	float m_a, m_b, m_c;

public:
	Triangle();
	Triangle(float a, float b, float c);
	~Triangle();


	float perimeter();
	float areaGeron();
};