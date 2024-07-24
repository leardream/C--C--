#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{
private:
    double re;
    double im;

public:
    Complex();                            
    Complex(double re);                   
    Complex(double re, double im);        
    ~Complex();       
    
    void assign(Complex c);         
    void assign2(const Complex *pc);       
    void assign3(const Complex &re);
    
    bool equals(const Complex &rc);
    
    double real();
    double imag();
    
    void real(double re);
    void imag(double im);
};

#endif // COMPLEX_H

