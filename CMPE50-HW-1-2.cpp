//============================================================================
// Name        : CMPE50-HW-1-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW1_02
//============================================================================

#include <iostream>
using namespace std;

const int nickel=5, dime=10, quarter= 25, dollar=100, twinkie=350;

void count_change();
bool verify(int);

int main()
{
	count_change();
	return 0;
}

void count_change()
{
	int coin, total = 0;
	cout << "Hello! For A Deep Fried Twinkie," << endl;

	do
	{

		cout << "Enter Your Coin in Cents:" << endl;
		cin >> coin;

		if(verify(coin))
		{
			total += coin;
			cout << "Total Coins Entered: " << total << " Cents " << endl;
		}
		else
		{
			cout << "Please Enter 5 for Nickel, 10 for Dime, 25 for Quarter, or 100 for Dollar Only - Try Again" << endl;
		}
	} while (total < twinkie);
	cout << "Enjoy your deep-fried twinkie!!!" << endl;

	if (total > twinkie)
	{
		cout << "Your Change is " << total - twinkie << " Cents" << endl;
	}
}

bool verify(int i)
{
	if (i == nickel || i == dime || i == quarter || i == dollar)
		return true;
	else
		return false;
}

/*Hello! For A Deep Fried Twinkie,
*Enter Your Coin in Cents:
*5
*Total Coins Entered: 5 Cents
*Enter Your Coin in Cents:
*10
*Total Coins Entered: 15 Cents
*Enter Your Coin in Cents:
*25
*Total Coins Entered: 40 Cents
*Enter Your Coin in Cents:
*100
*Total Coins Entered: 140 Cents
*Enter Your Coin in Cents:
*50 							// To show Error Input According to Coin Values
*Please Enter 5 for Nickel, 10 for Dime, 25 for Quarter, or 100 for Dollar Only - Try Again
*Enter Your Coin in Cents:
*100
*Total Coins Entered: 240 Cents
*Enter Your Coin in Cents:
*100
*Total Coins Entered: 340 Cents
*Enter Your Coin in Cents:
*100
*Total Coins Entered: 440 Cents // To show payment over $3.50
*Enjoy your deep-fried twinkie!!!
*Your Change is 90 Cents 		// To show calculated change from user input values
 */

