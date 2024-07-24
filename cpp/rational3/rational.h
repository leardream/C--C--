#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
	int num;
	int den;

public:
	Rational();						// default const.
	Rational(int num);				// convert const.
	Rational(int num, int den);
	~Rational();

	Rational& operator = (const Rational& rhs); 
	bool operator == (const Rational& rhs);
	
	const Rational operator + (const Rational& rhs);
	const Rational operator - (const Rational& rhs);
	const Rational operator * (const Rational& rhs);
	const Rational operator / (const Rational& rhs);

	int numerator() const;
	int denominator() const;

	void numerator(int num);
	void denominator(int den);
};

#endif

