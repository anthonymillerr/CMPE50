//============================================================================
// Name        : Lab0_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : #2
//============================================================================

#include <iostream>
using namespace std;

class Student{
public:
	string name;
	int roll_no;
	string phone;
	string address;
};
int main() {
	Student student1;
	Student student2;


	student1.name = "Sam";
	student1.roll_no = 1;
	student1.phone = "408-123-4567";
	student1.address = "1234 Apple Rd.";

	student2.name = "John";
	student2.roll_no = 2;
	student2.phone = "669-123-4567";
	student2.address = "5678 Banana Ct.";

	cout << "Name of Student 1 is " <<student1.name<<endl;
	cout << student1.name << "'s roll number is " << student1.roll_no << endl;
	cout << student1.name << "'s phone number is " << student1.phone << endl;
	cout << student1.name << "'s address is " << student1.address << endl;
	cout <<"\n";
	cout << "Name of Student 2 is " <<student2.name<<endl;
	cout << student2.name << "'s roll number is " << student2.roll_no << endl;
	cout << student2.name << "'s phone number is " << student2.phone << endl;
	cout << student2.name << "'s address is " << student2.address << endl;
	return 0;
}
