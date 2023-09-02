//============================================================================
// Name        : Lab6_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab6_03
//============================================================================

#include <iostream>
using namespace std;

class Parallelogram{
private:
	double base,height,area;

public:
	Parallelogram(double Base, double Height){
		base=Base;
		height=Height;
		area=Base*Height;
	}

	void calculate(){
		area=base*height;
	}

	void display(){
		cout<<"Area of Parallelogram: "<< area << endl;
	}
};
int main(){
	double base,height;
	cout<<"Enter base:";
	cin>>base;
	cout<<"Enter height:";
	cin>>height;

	Parallelogram par(base,height);
	par.calculate();
	par.display();
	return 0;
}
