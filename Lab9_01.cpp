//============================================================================
// Name        : Lab9_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab9_01
//============================================================================

#include <iostream>
#include <cmath>
#include "Polynomial.h"

using namespace std;

int main() {
	double coefficients1[4] = {2,5,-3,0};
	double coefficients2[3] = {-10,0,7};

	Polynomial polynomial1(coefficients1, 3);
	Polynomial polynomial2(coefficients2, 2);

	cout<< "Polynomial 1: " << polynomial1 << endl;
	cout<< "Polynomial 2: " << polynomial2 << endl;
	cout<<"\n"<<endl;

	cout<< "Polynomial 1 + Polynomial 2: " <<  polynomial1 + polynomial2 << endl;
	cout<<"\n"<<endl;

	cout<< "2 + (Polynomial 1): " << 2 + polynomial1 << endl;
	cout<<"\n"<<endl;

	cout<< "(Polynomial 1) + 2: " << polynomial1 + 2 << endl;
	cout<<"\n"<<endl;

	cout<< "Polynomial 1 - Polynomial 2: " <<  polynomial1 - polynomial2 << endl;
	cout<<"\n"<<endl;

	cout<< "2 - (Polynomial 2): " << 2 - polynomial2 << endl;
	cout<<"\n"<<endl;

	cout<< "(Polynomial 2) - 2: " << polynomial2 - 2 << endl;
	cout<<"\n"<<endl;

	cout<< "Polynomial 1 * Polynomial 2: " <<  polynomial1 * polynomial2 << endl;
	cout<<"\n"<<endl;

	cout<< "(Polynomial 1) * 2: " <<  polynomial1 * 2 << endl;
	cout<<"\n"<<endl;

	cout<< "2 * (Polynomial 1): " << 2 * polynomial1 << endl;
	cout<<"\n"<<endl;

	cout<< "(Polynomial 2) where x = 1:" << polynomial2.evaluate(1.0)<<endl;
	cout<<"\n"<<endl;

	cout<< "Degree 1 Coefficient of Polynomial2: " << polynomial2.get_coeff(1)<<endl;
	cout<<"\n"<<endl;

	return 0;
}
Polynomial::Polynomial()
{
	degree = 10;
	coeff = new double[degree+1];
	for (int deg = degree; deg >= 0; deg--){
		int indexOfDegree = degree - deg;
		coeff[indexOfDegree] = 0;
	}
}

Polynomial::Polynomial(int deg)
{
	degree = deg;

	coeff = new double[degree+1];
	for (int deg = degree ; deg >= 0; deg--){
		int indexOfDegree = degree - deg;
		coeff[indexOfDegree] = 0;
	}
}

Polynomial::Polynomial(const Polynomial &poly)
{
	degree = poly.get_degree();

	coeff = new double[degree+1];
	for (int deg = degree; deg >= 0; deg--){
		int indexOfDegree = degree - deg;
		coeff[indexOfDegree] = poly.get_coeff(indexOfDegree);
	}
}

Polynomial::Polynomial(double cfs[], int deg){
	degree = deg;

	coeff = new double[degree+1];
	for (int deg = degree; deg >= 0; deg--){
		int indexOfDegree = degree - deg;
		coeff[indexOfDegree] = cfs[indexOfDegree];
	}
}
Polynomial::Polynomial(double constant){
	degree = 0;

	coeff = new double[1];
	coeff[0]=constant;
}
Polynomial::~Polynomial()
{
	delete [] coeff;
}

int Polynomial::get_degree() const
{
	return degree;
}

double Polynomial::get_coeff(int deg) const
{
	if (degree < deg)
	{
		cout<< "Degree exceeded." << endl;
		return 0;

	}else{
		int i = degree - deg;
		return coeff[i];
	}
}

void Polynomial::set_coeff(int degr, double val)
{
	if (degree < degr)
	{
		cout << "Degree exceeded." << endl;
		return;
	}
	coeff[degr] = val;
}


double Polynomial::evaluate(double val)
{
	double total = 0;
	for(int i = 0; i < degree; i++){
		total += coeff[i] * pow(val,degree - i);
	}
	total += coeff[degree];
	return total;
}


void Polynomial::operator =(const Polynomial &poly)
{
	if (this == &poly)
	{
		return;
	} else {
		degree = poly.get_degree();
		delete[] coeff;
		coeff = new double[degree +1];
		for(int deg = degree; deg >= 0; deg--){
			int i = degree - deg;
			coeff[i] = poly.get_coeff(deg);
		}
	}
}

// Overloaded operator +
Polynomial operator+(const Polynomial &pola, const Polynomial &polb)
{
Polynomial sum;
if(pola.degree > polb.degree){
	sum = pola;

	for(int deg = polb.degree; deg>=0; deg--){
		int indexOfDegreeSum = sum.degree - deg;
		int indexOfDegreePolb = polb.degree - deg;
		sum.coeff[indexOfDegreeSum] += polb.coeff[indexOfDegreePolb];
	}
} else {
	sum = polb;

	for (int deg = pola.degree; deg >= 0; deg--){
		int indexOfDegreeSum = sum.degree - deg;
		int indexOfDegreePola = pola.degree - deg;
		sum.coeff[indexOfDegreeSum] += polb.coeff[indexOfDegreePola];
	}
}
return sum;
}
Polynomial operator+(const Polynomial &pola, const double &polb){
	return pola + Polynomial(polb);
}
Polynomial operator+(const double &pola, const Polynomial &polb){
	return Polynomial(pola) + polb;
}
Polynomial operator-(const Polynomial &pola, const Polynomial &polb){
	Polynomial difference;
	if(pola.degree > polb.degree){
		difference = pola;
	}else {
		difference = Polynomial(polb.degree);
		difference = difference + pola;
	}
	for(int i = 0; i <= polb.degree;i++){
		difference.coeff[difference.degree-i] -= polb.coeff[polb.degree - i];
	}
	return difference;
}
Polynomial operator-(const Polynomial &pola, const double &polb){
	return pola - Polynomial(polb);
}
Polynomial operator-(const double &pola, const Polynomial &polb){
	return Polynomial(pola)-polb;
}
Polynomial operator*(const Polynomial &pola, const Polynomial &polb){
	Polynomial product(pola.degree + polb.degree);

	for(int i = 0; i <= pola.degree; i++){
		for(int j = 0; j<= polb.degree; j++){
			int index = product.degree - ((pola.degree - i) + (polb.degree-j));
			product.coeff[index] += pola.coeff[i] * polb.coeff[j];
		}
	}
	return product;
}
Polynomial operator*(const Polynomial &pola, const double &polb){
	return pola * Polynomial(polb);
}
Polynomial operator*(const double &pola, const Polynomial &polb){
	return Polynomial(pola) * polb;
}
// Overloaded << operator
ostream& operator << (ostream& ost, const Polynomial &pol)
{
for(int i = 0; i < pol.degree - 1; i++){
	ost << "("<<pol.coeff[i]<<"x^"<<pol.degree - i << ") + ";
}
ost<<"("<<pol.coeff[pol.degree-1]<<"x) + " << "(" << pol.coeff[pol.degree]<<")";
return ost;
}

