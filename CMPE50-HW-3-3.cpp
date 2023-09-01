//============================================================================
// Name        : CMPE50-HW-3-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-3-3
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

	string str;									//Declare Needed Variables
	string out;
	string c;
	int count=1;
	double s1,s2,s3,s4,s5;


	cout<<"Enter a File Name:";					//Reads In The File of Scores
	cin>>c;
	ifstream ifs(c);
	if(ifs.fail())								//Checks If File Fails
	{
		cout<<"Error Opening File For Scores." << endl;
		exit(1);
	}

	cout<<"\nEnter Output File Name:";			//User Selects File Output For Results
	cin>>out;

	ofstream ofs(out);
	while(ifs>>str>>s1>>s2>>s3>>s4>>s5)			//Runs Sorting Through Each Line of Text For Scores/Organization
	{

		ofs<<left<<count<<setw(2)<<"."<<setw(10)<<str<<fixed
		<<right<<setw(7)<<setprecision(2)<<s1
		<<right<<setw(7)<<setprecision(2)<<s2
		<<right<<setw(7)<<setprecision(2)<<s3
		<<right<<setw(7)<<setprecision(2)<<s4
		<<right<<setw(7)<<setprecision(2)<<s5<<endl;
		count++;
		}

	ifs.close();								//Closes Input File
	ofs.close();								//Closes Output File

	return 0;
}

//Output
//Enter a File Name:CMPE50-HW-3-3-INPUT.txt		//Input File
//
//Enter Output File Name:OutputFile.txt			//Output File
//
//
//Output File Results
//1. Jones       80.50  77.00  95.70  88.60 100.00
//2. Smith       80.00  99.00 100.00  87.80  93.76
//3. Holmes      53.65  84.54  76.67  97.75  89.90

