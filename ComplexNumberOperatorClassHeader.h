/*
 * Complex.h
 *
 *
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class Complex{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real_part);
	Complex(double real, double imaginary);
	friend Complex operator+(const Complex &left, const Complex &right);
	friend Complex operator-(const Complex &left, const Complex &right);
	friend Complex operator*(const Complex &left, const Complex &right);
	friend istream& operator>>(istream &in, Complex &complex);
	friend ostream& operator<<(ostream &out, const Complex &complex);
};
const Complex i(0,1);

#endif /* COMPLEX_H_ */
