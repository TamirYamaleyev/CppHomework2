#include "Fraction.h"

#include<numeric>

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom)
{
	Reduce();
}

void Fraction::Reduce()
{
	int gcd = std::gcd(numerator, denominator);

	numerator /= gcd;
	denominator /= gcd;

	// Abs
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
}

Fraction Fraction::operator+(const Fraction& other) const
{
	return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.numerator);
}

Fraction Fraction::operator-(const Fraction& other) const
{
	return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.numerator);
}

Fraction Fraction::operator*(const Fraction& other) const
{
	return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const
{
	return Fraction(numerator * other.denominator, denominator * other.numerator);
}

bool Fraction::operator==(const Fraction& other) const
{
	return numerator == other.numerator && denominator == other.denominator;
}

bool Fraction::operator<(const Fraction& other) const
{
	return numerator * other.denominator < other.numerator * denominator;
}

std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
{
	os << fraction.numerator << "/" << fraction.denominator;
	return os;
}