//============================================================================
// Name        : Lab0_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : #4
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

class Triangle{
private:
	int a, b, c;
public:
	Triangle(int a, int b, int c){
		this ->a = a;
		this ->b = b;
		this ->c = c;
	}
	int area(){
		float s;
		s= (a+b+c)/2.0;
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
	int perimeter(){
		return a+b+c;
	}
};
int main() {
	int a = 3;
	int b = 4;
	int c = 5;

	Triangle tri(a,b,c);

	cout<< "Area of Triangle is " <<tri.area()<< " units squared." << endl;
	cout<< "\n";
	cout<< "Perimeter of Triangle is " <<tri.perimeter()<< " units." << endl;
	return 0;
}
