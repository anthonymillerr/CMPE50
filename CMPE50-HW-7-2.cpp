//============================================================================
// Name        : CMPE50-HW-7-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 7-2
//============================================================================

#include <iostream>
using namespace std;

void reverse(int *arr, int size){
	int *front = arr;
	int *rear = arr+(size-1);
	while(front<rear){
		int temp=*front;
		*front = *rear;
		*rear = temp;
		front++;
		rear--;
	}
}
int main() {
	int n;
	int a;
	cout<<"Enter Size Of Array: ";
	cin>>n;
	int *ptr = new int[n];
	cout<<"Enter "<<n<<" Elements For the Array"<<endl;
	for (int i=0; i<n; i++){
		cin>>a;
		*(ptr+i)=a;
	}
	cout<<"Original Array Is: "<<endl;
	for(int i=0; i<n; i++)
		cout<<*(ptr+i)<<" ";
	reverse(ptr, n);
	cout<< endl;
	cout<<"Reversed Array Is: "<<endl;
	for(int i=0;i<n;i++)
		cout<<ptr[i]<<" ";
	delete []ptr;
}
//OUTPUT FOR ODD LENGTH

//Enter Size Of Array: 5
//Enter 5 Elements For the Array
//1
//2
//3
//4
//5
//Original Array Is:
//1 2 3 4 5
//Reversed Array Is:
//5 4 3 2 1

//OUTPUT FOR EVEN LENGTH

//Enter Size Of Array: 6
//Enter 6 Elements For the Array
//1
//2
//3
//4
//5
//6
//Original Array Is:
//1 2 3 4 5 6
//Reversed Array Is:
//6 5 4 3 2 1
