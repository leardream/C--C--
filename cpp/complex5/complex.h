#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex;

std::ostream& operator << (std::ostream& out, const Complex& rhs);

class Complex {
private:
	double re_;
	double im_;
	
public:
	//Complex();
	//Complex(double re);
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);
	~Complex();
	
	Complex& operator=(const Complex& rhs);
	Complex& operator+=(const Complex& rhs);
	//Complex& operator-=(const Complex& rhs);
	//Complex& operator%=(const Complex& rhs);
	// % = X
	
	// &=, |=, <<=, >>= X

	const Complex operator+(const Complex& rhs) const;
	//const Complex operator-(const Complex& rhs);
	//const Complex operator*(const Complex& rhs);
	//const Complex operator%(const Complex& rhs);
	
	const Complex& operator++();			// perfix
	const Complex operator++(int );		// postfix
	//++, -- X 
	
	bool operator==(const Complex& rhs) const;
	bool operator!=(const Complex& rhs) const;
	//bool operator>(const Complex& rhs);
	//bool operator<(const Complex& rhs);
	//bool operator>=(const Complex& rhs);
	//bool operator<=(const Complex& rhs);


	double real() const;
	double imag() const;
	
	void real(double re);
	void imag(double im);
	
	//	
};

#endif
