//============================================================================
// Name        : Lab2_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void Add(int a, int b)
{
	cout << " Sum of a and b is: " << (a + b);
}
void Add(double a, double b)
{
	cout << "Sum of a and b is:" << (a + b);
}

void Add(string a, string b)
{
	cout << "Sum of 'a' and 'b' is:" << (a + " " + b);
}


int main()
{

	cout << "Enter 1 to add two doubles. \n";
	cout << "Enter 2 to add two integers. \n";
	cout << "Enter 3 to add two strings. \n";
	int choice;

	cin >> choice;

	cout << "Your choice was: " << choice;

	if (choice == 1) {


		cout << "\nInput double for a:\n";
		double a;
		cin >> a;


		cout << "\nInput double for b:\n";
		double b;
		cin >> b;

		Add(a, b);

	}

	if (choice == 2) {


			cout << "\nInput integer for a:\n";
			int a;
			cin >> a;


			cout << "\nInput integer for b:\n";
			int b;
			cin >> b;

			Add(a, b);

		}

	if (choice == 3) {

		string a= "", b= "";
		cout<<"Enter String 1:\n";
		cin>>a;
		cout<<"Enter String 2:\n";
		cin>>b;

			Add(a, b);

		}


	return 0;
}

// Choice 1
/* Enter 1 to add two doubles.
*Enter 2 to add two integers.
*Enter 3 to add two strings.
*1
*Your choice was: 1
*Input double for a:
*2
*Input double for b:
*2
*Sum of a and b is:4
*/

// Choice 2
/* Enter 1 to add two doubles.
 *Enter 2 to add two integers.
 * Enter 3 to add two strings.
 *2
 *Your choice was: 2
 *Input integer for a:
 *5
 *Input integer for b:
 *5
 *Sum of a and b is: 10
*/

// Choice 3
/* Enter 1 to add two doubles.
*Enter 2 to add two integers.
*Enter 3 to add two strings.
*3
*Your choice was: 3Enter String 1:
*25
*Enter String 2:
*25
*Sum of 'a' and 'b' is:25 25
*/
