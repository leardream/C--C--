#include "rational.h"

Rational::Rational()
{
	this->num = 0;
	this->den = 1;
}

Rational::Rational(int num)
{
	this->num = num;
	this->den = 1;
}

Rational::Rational(int num, int den)
{
	this->num = num;
	this->den = den;
}

Rational::~Rational()
{

}

Rational& Rational::operator = (const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;

    return *this;
}

const Rational Rational::operator + (const Rational& rhs)
{
	Rational result(this->num * rhs.den + rhs.num * this->den , this->den * rhs.den);
	
	return result;
}

const Rational Rational::operator - (const Rational& rhs)
{
	Rational result(this->num * rhs.den - rhs.num * this->den , this->den * rhs.den);
	
	return result;
}

const Rational Rational::operator * (const Rational& rhs)
{
	Rational result(this->num * rhs.num, this->den * rhs.den);

	return result;
}

const Rational Rational::operator / (const Rational& rhs)
{
	Rational result(this->num * rhs.den, this->den * rhs.num);


	return result;
}

bool Rational::operator == (const Rational& rhs)
{
	return this->num == rhs.num && this->den == rhs.den;
}

int Rational::numerator() const
{
	return this->num;
}

int Rational::denominator() const
{
	return this->den;
}

void Rational::numerator(int num)
{
	this->num = num;
}

void Rational::denominator(int den)
{
	this->den = den;
}

