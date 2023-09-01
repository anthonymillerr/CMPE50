//============================================================================
// Name        : CMPE50-HW-6-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-6-2
//============================================================================

#include <iostream>
using namespace std;
class Duple{
private:
	int f;
	int s;
public:
	Duple();
	Duple(int first, int second);
	friend istream& operator>>(istream& ins, Duple& second);
	friend ostream& operator<<(ostream& outs, Duple& second);
	Duple operator + (Duple& num);
	Duple operator - (Duple& num);
};
int main() {
	Duple a;
	Duple b(3,4);
	cout<<"First Duple: "<< a;
	cout<<"Second Duple "<< b;
	cout<<"Enter Integers for First Pair:"<<endl;
	cin>>a;
	cout<<"Your Duples Are:"<<endl;
	cout<<a<<b;
	cout<<"The Sum Of Duples Is:" <<endl;
	Duple x = a + b;
	cout << x;
	cout<<"The Difference of Duples Is:" <<endl;
	Duple y = a - b;
	cout << y;
	return 0;
}
Duple::Duple(){
	this->f = 0;
	this->s = 0;
}
Duple::Duple(int first, int second){
	this->f = first;
	this->s = second;
}
istream& operator >>(istream& ins, Duple& second){
	ins>>second.f>>second.s;
	return ins;
}
ostream& operator <<(ostream& outs, Duple& second){
	outs<<"("<<second.f<<","<<second.s<<")"<<endl;
	return outs;
}
Duple Duple::operator+(Duple& num){
	return *(new Duple(this->f+num.f, this->s+num.s));
}
Duple Duple::operator-(Duple& num){
	return *(new Duple(this->f-num.f, this->s-num.s));
}
//OUTPUT
//First Duple: (0,0)
//Second Duple (3,4)
//Enter Integers for First Pair:
//1
//2
//Your Duples Are:
//(1,2)
//(3,4)
//The Sum Of Duples Is:
//(4,6)
//The Difference of Duples Is:
//(-2,-2)
