//============================================================================
// Name        : CMPE50-HW-2-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void countEvens(int a[], int n);

int main()
{
	int n;
	cout << "Enter Number of Entries in Array:" << endl;
	cin >> n;
	int a[n];

	cout << "Enter Elements of Array" << endl;
	for (int i=0; i<n; i++)
	cin >> a[i];
	countEvens(a,n);
	}


void countEvens(int a[], int n)
{
	int even=0;
	cout<<"Even Numbers in the Array are:\n";
	for (int i=0;i<n;i++)
	{
		if(a[i]%2 == 0){
			cout<< a[i]<<endl;
			even++;
		}
	}
cout<< "Total Even Numbers in Array are:" << even;

}

/*
Enter Number of Entries in Array:		//Array of Length 5
5
Enter Elements of Array
1
2
3
4
5
Even Numbers in the Array are:
2
4
Total Even Numbers in Array are:2
*
*
*
Enter Number of Entries in Array:		//Array of Length 10
10
Enter Elements of Array
12
43
56
75
94
29
49
56
17
28
Even Numbers in the Array are:
12
56
94
56
28
Total Even Numbers in Array are:5
 */
