//============================================================================
// Name        : CMPE50-HW-1-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW1_01
//============================================================================

#include <iostream>
#include <ctype.h>
using namespace std;

void hat_size(double weight, double height){

	double size;
	double ratio;
	ratio = (weight/height);
	size = ratio*2.9;
			cout<< "Your Hat Size is: " << size << endl;
}

void jacket_size(double height, double weight, int age)
{
	double size;
	float extra = 0;
	if (age >=40)
	{
		extra = ((age-30)/10)*0.125;
		size = ((height * weight)/ 288)+ extra;
	}
	else
	size = ((height * weight) / 288);
	cout << "Your Jacket Size is:" << size << endl;
}

void waist(double weight, int age){

	double size;
	float extra = 0;
	if (age >= 30)
	{
		extra = ((age-28)/2)*(1.0/10);
		size = (weight/(5.7)) + extra;
	}
	else
		size = weight/(5.7);
	cout << "Your Waist Size is:" << size << endl;

}

int main() {
	cout << "Hello! Please Answer the Following Questions!" << endl;

	double height;
	double weight;
	int age;
	char response;
do
{
	cout << "Enter Your Height In Inches:" << endl;
	cin >> height;
	cout << "Enter Your Weight In Pounds:" << endl;
	cin >> weight;
	cout << "Enter Your Age In Years:" << endl;
	cin >> age;

	hat_size(weight,height);
	jacket_size(height,weight,age);
	waist(weight, age);

	cout << "Would You Like to Enter Another User? (Y/N)" << endl;
	cin >> response;
}
	while(toupper(response) == 'Y');
	return 0;
}

/*Hello! Please Answer the Following Questions!
*Enter Your Height In Inches:
*72
*Enter Your Weight In Pounds:
*165
*Enter Your Age In Years:
*29									//Checking Waist Size Before Adjustment
*Your Hat Size is: 6.64583
*Your Jacket Size is:41.25
*Your Waist Size is:28.9474
*Would You Like to Enter Another User? (Y/N) // Allows User to Continuously Enter Users
*Y
*Enter Your Height In Inches:
*72
*Enter Your Weight In Pounds:
*165
*Enter Your Age In Years:
*30									//Checking Waist Size After Adjustment
*Your Hat Size is: 6.64583
*Your Jacket Size is:41.25
*Your Waist Size is:29.0474
*Would You Like to Enter Another User? (Y/N)
*Y
*Enter Your Height In Inches:
*72
*Enter Your Weight In Pounds:
*165
*Enter Your Age In Years:
*39									//Checking Jacket Size Before Adjustment
*Your Hat Size is: 6.64583
*Your Jacket Size is:41.25
*Your Waist Size is:29.4474
*Would You Like to Enter Another User? (Y/N)
*Y
*Enter Your Height In Inches:
*72
*Enter Your Weight In Pounds:
*165
*Enter Your Age In Years:
*40									//Checking Jacket Size After Adjustment
*Your Hat Size is: 6.64583
*Your Jacket Size is:41.375
*Your Waist Size is:29.5474
*Would You Like to Enter Another User? (Y/N)
*N									//Ending Program
*/
