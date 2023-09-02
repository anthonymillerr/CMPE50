//============================================================================
// Name        : Lab7_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab7_02
//============================================================================

#include <iostream>
using namespace std;

class Rational{
	private:
	int numerator;
	int denominator;

	public:
	Rational(){
		numerator = 0;
		denominator = 1;
	}

	Rational(int numer, int denom){
		numerator = numer;
		if(denom!=0){
			denominator = denom;
		} else {
			cout << "Dividing By Zero Not Allowed." << endl;
			exit(1);
		}
	}

	void input(istream& in){
		int numer, denom;
		cout << "Enter Numerator Value: \n";
		in >> numer;
		cout << "Enter Denominator Value: \n";
		in >> denom;
		numerator = numer;
		if (denom !=0){
			denominator = denom;
		} else {
			cout << "Cannot Divide By Zero." << endl;
			exit(1);
		}
	}

	void output(ostream& out){
		out << numerator << "/" << denominator << endl;
	}

	friend Rational normalize(Rational& rat){
		int n1 = rat.numerator;
		int n2 = rat.denominator;
		int temp;
		while (n2 != 0)
		{
			temp = n1;
			n1 = n2;
			n2 = temp % n2;
		}
		int gcd = abs(n1);

		rat.numerator /= gcd;
		rat.denominator /= gcd;

		if(rat.denominator < 0){
			rat.numerator *= -1;
			rat.denominator *= -1;
		}
		return rat;
	}

	friend Rational add(const Rational& rat1, const Rational& rat2){
		int comDenom = rat1.denominator * rat2.denominator;
		int num1 = rat1.numerator * rat2.denominator;
		int num2 = rat2.numerator * rat1.denominator;
		Rational result(num1 + num2, comDenom);
		return normalize(result);
	}
	friend Rational subtract(const Rational& rat1, const Rational& rat2){
		int comDenom = rat1.denominator * rat2.denominator;
		int num1 = rat1.numerator * rat2.denominator;
		int num2 = rat2.numerator * rat1.denominator;
		Rational result(num1 - num2, comDenom);
		return normalize(result);
	}
	friend Rational multiply(const Rational& rat1, const Rational& rat2){
		int numerator = rat1.numerator * rat2.numerator;
		int denominator = rat2.denominator * rat1.denominator;
		Rational result(numerator, denominator);
		return normalize(result);
	}
	friend Rational divide(const Rational& rat1, const Rational& rat2){
		int numerator = rat1.numerator * rat2.denominator;
		int denominator = rat1.denominator * rat2.numerator;
		Rational result(numerator, denominator);
		return normalize(result);
	}

	friend bool equal(const Rational& rat1, const Rational& rat2){
		if (rat1.numerator * rat2.denominator == rat1.denominator * rat2.numerator){
			return true;
		} else {
			return false;
		}
	}

	friend bool less_than(const Rational& rat1, const Rational& rat2){
		if ((rat1.numerator * rat2.denominator) < (rat2.numerator * rat1.denominator)){
			return true;
		} else {
			return false;
		}
	}
};

int main() {
	Rational rationalNum1;
	Rational rationalNum2;

	cout << "ENTER VALUES FOR FIRST RATIONAL VALUE: \n";
	rationalNum1.input(cin);
	cout << "ENTER VALUES FOR SECOND RATIONAL VALUE: \n";
	rationalNum2.input(cin);

	cout << "The Rational Numbers Added = ";
	add(rationalNum1, rationalNum2).output(cout);

	cout << "The Rational Numbers Subtracted =  ";
	subtract(rationalNum1, rationalNum2).output(cout);

	cout << "The Rational Numbers Multiplied = ";
	multiply(rationalNum1, rationalNum2).output(cout);

	cout << "The Rational Numbers Divided = ";
	divide(rationalNum1, rationalNum2).output(cout);

	cout << "\n";

	cout<< "The First Rational Value After Normalization = ";
	normalize(rationalNum1).output(cout);

	cout<< "The Second Rational Value After Normalization = ";
	normalize(rationalNum2).output(cout);

	cout << "\n";

	cout<< "The Two Rational Numbers Are ";
	if(equal(rationalNum1,rationalNum2)){
		cout<< "EQUAL" << endl;
	} else {
		cout<<"NOT EQUAL" << endl;
	}

	cout << "First Rational Value Is ";
	if(less_than(rationalNum1,rationalNum2)){
	cout << "LESS Than Second Rational Value" << endl;
	} else{
	cout<< "NOT LESS Than Second Rational Value" << endl;

	}
	return 0;
}
