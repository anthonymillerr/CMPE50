//============================================================================
// Name        : CMPE50-HW-3-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-3-1
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	double n;
	string c;

	cout<<"Enter a File Name:";
	cin>>c;
	ifstream ifs(c);

	if(ifs.fail())
	{
		cout << "\nError Opening File For Input" << endl;
		exit(1);
	}

	double sum=0;
	int count=0;
	while(ifs>>n){
		sum = sum+n;
		count++;
	}

	double average=0;

	average=sum/count;

	cout<<"\nSum Is:" << sum << endl;
	cout<<"\nCount of Numbers Is:" << count << endl;
	cout <<"\nAverage of Numbers From File Is:" << average << endl;
	ifs.close();

	return 0;
}

//Input File Content:
//
//6.5 10.5
//
//15.5 22.5 33.5 77.5
//
//
//88.5 99.5


//Enter a File Name:CMPE50-HW-3-1-InputText.txt		//Input File Name
//
//Sum Is:354										//Recites Sum
//
//Count of Numbers Is:8								//Recites Count of Numbers
//
//Average of Numbers From File Is:44.25				//Displays Average


