#pragma once

#include <iostream>	

class Vector2D
{
public:
	float x;
	float y;

	Vector2D(float x = 0.0f, float y = 0.0f);

	Vector2D operator+(const Vector2D& other) const;
	Vector2D operator-(const Vector2D& other) const;

	Vector2D& operator*=(float scalar);
	Vector2D& operator/=(float scalar);

	bool operator==(const Vector2D& other) const;

	float& operator[](int index);
	const float& operator[](int index) const;

	friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);
};

float dot(const Vector2D& a, const Vector2D& b);

Vector2D operator*(const Vector2D& vec, float scalar);
Vector2D operator*(float scalar, const Vector2D& vec);