#pragma once

#include <cmath>

class Vector
{

private:
	float m_x, m_y;

public:
	Vector();
	Vector(float x1 = 0.0f, float y1 = 0.0f);
	~Vector();

	float length();

};