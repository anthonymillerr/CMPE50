//============================================================================
// Name        : Lab0_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : #1
//============================================================================

#include <iostream>
using namespace std;

class Student{
public:
	string name;
	int roll_no;
};
int main() {
	Student student;

	student.roll_no = 2;
	student.name = "John";

	cout<< "Roll Number: " << student.roll_no <<endl;
	cout<< "Name: " << student.name <<endl;
	return 0;
}
