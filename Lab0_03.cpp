//============================================================================
// Name        : Lab0_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : #3
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

class Triangle{
public:
	int a, b, c;
	Triangle(){
		a = 3;
		b = 4;
		c = 5;
	}
	void area(){
		float s;
		s= (a+b+c)/2.0;
		float A;
		A = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area of Triangle Given Sides of 3, 4, and 5 = " << A
			<< " units squared."<< endl;
	}
	void perimeter(){
		cout <<"Perimeter of Triangle Given Sides of 3, 4, and 5 = " << (a+b+c)
			<< " units."<<endl;
	}
};
int main() {
	Triangle tri;
	tri.area();
	cout<< "\n";
	tri.perimeter();
	return 0;
}
