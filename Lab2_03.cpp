//============================================================================
// Name        : Lab2_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int large = 0;
	int secondlarge = 0;

	cout << "Enter 10 Integers for Array: ";

	for(int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int temp[10];
	for(int i = 0; i < 10; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = 0; i < 10; i++)
	{
		if(temp[i]>large)
		{
			large=temp[i];
		}
	}
	for(int i = 0; i < 10; i++)
	{
		if(temp[i]==large)
		{
			temp[i]=0;
		}
	}

	for(int i = 0; i < 10; i++)
	{
		if(temp[i] > secondlarge)
		{
			secondlarge=temp[i];
		}
	}
	cout << "The Second Largest Number in the Array is: " << secondlarge;
}

/* Enter 10 Integers for Array: 1
*2
*9
*3
*4
*9
*8
*5
*4
*0
*The Second Largest Number in the Array is: 8
 */
