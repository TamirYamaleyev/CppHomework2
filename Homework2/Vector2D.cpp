#include "Vector2D.h"

#include <cmath>
#include <stdexcept>

constexpr float EPSILON = 0.0001f;

Vector2D::Vector2D(float x, float y) : x(x), y(y){ }

Vector2D Vector2D::operator+(const Vector2D& other) const
{
	return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const
{
	return Vector2D(x - other.x, y - other.y);
}

Vector2D& Vector2D::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	
	return *this;
}

Vector2D& Vector2D::operator/=(float scalar)
{
	x /= scalar;
	y /= scalar;
	
	return *this;
}

bool Vector2D::operator==(const Vector2D& other) const
{
	return std::fabs(x - other.x) < EPSILON && std::fabs(y - other.y) < EPSILON;
}

float& Vector2D::operator[](int index)
{
	if (index == 0) return x;
	if (index == 1) return y;

	throw std::out_of_range("Vector2D's index is out of range");
}

const float& Vector2D::operator[](int index) const
{
	if (index == 0) return x;
	if (index == 1) return y;

	throw std::out_of_range("Vector2D's index is out of range");
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vec)
{
	os << "(" << vec.x << ", " << vec.y << ")";
	return os;
}

float dot(const Vector2D& a, const Vector2D& b)
{
	return a.x * b.x + a.y * b.y;
}

Vector2D operator*(const Vector2D& vec, float scalar)
{
	return Vector2D(vec.x * scalar, vec.y * scalar);
}

Vector2D operator*(float scalar, const Vector2D& vec)
{
	return Vector2D(vec.x * scalar, vec.y * scalar);
}