#include "rational.h"

std::ostream& operator << (std::ostream &out, const Rational& rhs)
{
	out << rhs.num << "/" << rhs.den;
	return out; 
}

Rational::Rational(int num, int den)
{
	this->num = num;
	this->den = den;
}

Rational::Rational(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
}

Rational::~Rational() {}

Rational& Rational::operator = (const Rational& rhs)
{
	if (this != &rhs) {
		this->num = rhs.num;
		this->den = rhs.den;
    }
	return *this;
}

bool Rational::operator == (const Rational& rhs)
{
	return this->num == rhs.num && this->den == rhs.den;
}

const Rational Rational::operator + (const Rational& rhs)
{
	int new_num = this->num * rhs.den + rhs.num * this->den;
	int new_den = this->den * rhs.den;
	return Rational(new_num, new_den);
}

