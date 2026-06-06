#pragma once

#include <iostream>

class Fraction
{
	private:
		int numerator;
		int denominator;

		void Reduce();

	public:
		Fraction(int num, int denom);

		Fraction operator+(const Fraction& other) const;
		Fraction operator-(const Fraction& other) const;
		Fraction operator*(const Fraction& other) const;
		Fraction operator/(const Fraction& other) const;

		bool operator==(const Fraction& other) const;
		bool operator<(const Fraction& other) const;

		friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
};

