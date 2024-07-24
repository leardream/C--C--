#include <iostream>
#include "rational.h"

int main()
{
	Rational r1(3, 4);			//3/4
	Rational r2(3);				//3/1
	Rational r3;					//0/1

	r1 = r3;							//operator = (r1, r3) or r1.operator = (r3)
	r1 = r2 = r3;						//r2.operator = (r2.operator = (r3))

	if (r1 == r3) {					//operator == (r1, r3) or r1.operator == (r3)
		std::cout << "r1 and r3 are equal" << std::endl;
	} else {
		std::cout << "r1 and r3 are not equal" << std::endl;
	}
	
	r3 = r1 + r2;
	r3 = r1 - r2;
	r3 = r1 * r2;
	r3 = r1 / r2;

	std::cout << "r1 : (" << r1.numerator() << "/" << r1.denominator() << ")" << std::endl;
	std::cout << "r2 : (" << r2.numerator() << "/" << r2.denominator() << ")" << std::endl;
	std::cout << "r3 : (" << r3.numerator() << "/" << r3.denominator() << ")" << std::endl;

	return 0;
}

