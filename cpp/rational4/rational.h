#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
friend std::ostream& operator << (std::ostream &out, const Rational& rhs);

private:
	int num;
	int den;

public:
	Rational(int num = 0, int den = 1);			// default argument
	Rational(const Rational &rhs);				// copy constructor

	~Rational();

	Rational& operator = (const Rational& rhs);

	bool operator == (const Rational& rhs);

	const Rational operator + (const Rational& rhs);
};

#endif

