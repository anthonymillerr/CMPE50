//============================================================================
// Name        : Lab9_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab9_02
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	Complex complex1(2, -3);
	Complex complex2(-7, 5);

	cout << "Complex 1: " << complex1 << endl;
	cout << "Complex 2: " << complex2 << endl;
	cout << "\n" << endl;
	cout << "Complex 1 + Complex 2: " << (complex1 + complex2) << endl;
	cout << "Complex 1 - Complex 2: " << (complex1 - complex2) << endl;
	cout << "Complex 1 * Complex 2: " << (complex1 * complex2) << endl;

	return 0;
}
Complex::Complex(){
	real = 0;
	imaginary = 0;
}
Complex::Complex(double real_part){
	this->real = real_part;
	imaginary = 0;
}
Complex::Complex(double real, double imaginary){
	this->real = real;
	this->imaginary = imaginary;
}

Complex operator+(const Complex &left, const Complex &right){
	Complex sum;
	sum.real = left.real + right.real;
	sum.imaginary = left.imaginary + right.imaginary;
	return sum;
}
Complex operator-(const Complex &left, const Complex &right){
	Complex difference;
	difference.real = left.real - right.real;
	difference.imaginary = left.imaginary - right.imaginary;
	return difference;
}
Complex operator*(const Complex &left, const Complex &right){
	Complex product;
	product.real = left.real * right.real - left.imaginary * right.imaginary;
	product.imaginary = left.real * right.imaginary + left.imaginary * right.real;
	return product;
}
istream& operator>>(istream &in, Complex &complex){
	in >> complex.real >> complex.imaginary;
	return in;
}
ostream& operator<<(ostream& out, const Complex &complex){
	out << complex.real << " + " << complex.imaginary << "i";
	return out;
}
