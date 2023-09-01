//============================================================================
// Name        : CMPE50-HW-2-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW2_02
//============================================================================

#include <iostream>
using namespace std;
void swapFrontBack(int a[], int n);

int main()
{
	int n;
	cout << "Enter Number of Entries in Array:" << endl;
	cin >> n;
	int a[n];

	if (n== 0){
		cout << "Array Is Empty, Enter An Array That Is Not Empty.\n";
	}

	else
	{
		cout << "Enter Elements of Array" << endl;
		for (int i=0; i<n; i++)
		cin >> a[i];
		swapFrontBack(a,n);
	}
}

void swapFrontBack(int a[], int n)
{
	int temp=a[0];
		a[0] = a[n-1];
		a[n-1]= temp;
	cout<< "\nArray after swapping first and last elements:\n";
	for (int i=0;i<n;i++){
		cout <<a[i]<< endl;
	}

}

/*
Enter Number of Entries in Array:
4									//Not Empty Array Result
Enter Elements of Array
1
2
3
4

Array after swapping first and last elements:
4
2
3
1
*
*
*
Enter Number of Entries in Array:
10									//Longer Array Result
Enter Elements of Array
12
23
45
43
23
46
76
45
65
87

Array after swapping first and last elements:
87
23
45
43
23
46
76
45
65
12
*
*
*
Enter Number of Entries in Array:
0									//Empty Array Result
Array Is Empty, Enter An Array That Is Not Empty.
 */


