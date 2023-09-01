//============================================================================
// Name        : CMPE50-HW-1-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW1_03
//============================================================================

#include <iostream>
using namespace std;

double max(double n1, double n2);
double max(double num1, double num2, double num3);
char response;

int main() {
	int option;
	do {
		cout << "Choose An Option To Find Max Of 2 Values Or 3 Values:" << endl;
		cout << "Enter (1) for 2 Values " << endl;
		cout << "Enter (2) for 3 Values " << endl;
		cin >> option;
		switch(option)
		{
		case 1:
			double n1,n2;
			cout << "Enter Two Numbers To Find The Max Of:" << endl;
			cin >> n1 >> n2;
			cout << max(n1,n2);
			break;
		case 2:
			double num1,num2,num3;
			cout << "Enter Three Numbers To Find The Max Of:" << endl;
			cin >> num1 >> num2 >> num3;
			cout << max(num1,num2,num3);
			break;
		}
			cout << "\n\nWould You Like to Try Another Set of Numbers? (Y/N)" << endl;
				cin >> response;

	}while(toupper(response) == 'Y');


}


double max(double n1, double n2){
	if(n1>n2){
		return n1;
	}
	else
		return n2;
}

double max(double num1, double num2, double num3){
	if (num1>num2 and num1>num3){
		return num1;
	}
	else if(num2 > num1 and num2 > num3){
		return num2;
	}
	else if(num3 > num1 and num3 > num1){
		return num3;
	}
	return 0;
}

/*Choose An Option To Find Max Of 2 Values Or 3 Values:
Enter (1) for 2 Values
Enter (2) for 3 Values
1														//2 Number Case
Enter Two Numbers To Find The Max Of:
1
9
9

Would You Like to Try Another Set of Numbers? (Y/N)		//Program Allows User to Input New Values
Y
Choose An Option To Find Max Of 2 Values Or 3 Values:
Enter (1) for 2 Values
Enter (2) for 3 Values
2														//3 Number Case
Enter Three Numbers To Find The Max Of:
2
4
6
6

Would You Like to Try Another Set of Numbers? (Y/N)
N														//Program Stop
*/
