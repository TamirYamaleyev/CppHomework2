#include <iostream>
#include "Vector2D.h"

int main()
{
	Vector2D v1(2.0f, 3.0f);
	Vector2D v2(4.0f, 5.0f);

	std::cout << v1 + v2 << std::endl;

	v1 *= 2.0f;
	std::cout << v1 << std::endl;

	std::cout << dot(v1, v2) << std::endl;

	std::cout << v1[0] << std::endl;
	v1[1] = 100.0f;

	std::cout << 3.0f * v2 << std::endl;
}