//============================================================================
// Name        : CMPE50-HW-3-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-3-2
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

void mergeFiles(ifstream &ifs1, ifstream &ifs2, ofstream &ofs3);

int main() {
	char file1[50],file2[50],file3[50];

	ifstream ifs1;
	ifstream ifs2;
	ofstream ofs3;

	cout<< "Enter Input File 1 Name:";		//File 1 Input
	cin >> file1;

	cout<< "Enter Input File 2 Name:";		//File 2 Input
	cin >> file2;

	cout<< "Enter Output File Name:";		//File Output Destination
	cin >> file3;

	ifs1.open(file1);
	if(ifs1.fail())
	{
		cout << "Error Opening " << file1 << " For This Input." << endl;
		exit(1);
	}

	ifs2.open(file2);
	if(ifs2.fail())
	{
		cout << "Error Opening " << file2 << " For This Input." << endl;
		exit(1);
	}

	ofs3.open(file3);
	if(ofs3.fail())
	{
		cout << "Error Opening " << file3 << " the for input." << endl;
		exit(1);
	}
	mergeFiles(ifs1, ifs2, ofs3);	//Call Function to Merge Files and Create List

		ifs1.close();
		ifs2.close();
		ofs3.close();

	return 0;

}

	void mergeFiles(ifstream &ifs1, ifstream &ifs2, ofstream &ofs3)		//Function to Merge and Sort the Two Files
	{
		int val1;
		int val2;

		ifs1>>val1;
		ifs2>>val2;

		while(ifs1&&ifs2)
		{
			if(val1<=val2)
			{
			 ofs3 << val1 << endl;

			 ifs1 >> val1;
			}
			else
			{
			ofs3 << val2 << endl;
			ifs2 >> val2;
			}
		}

		while(ifs1){
			ofs3 << val1 << endl;
			ifs1 >> val1;
		}

		while(ifs2){
			ofs3 << val2 <<endl;
			ifs2 >> val2;
		}
	}

//InputFile1.txt Contents:
//30 40 50 60 89
//
//InputFile2.txt Contents:
//6 10 15 22 33


//Enter Input File 1 Name:InputFile1.txt		//Entering File 1 with Sorted Numbers
//Enter Input File 2 Name:InputFile2.txt		//Entering File 2 with Sorted Numbers
//Enter Output File Name:OutputFile.txt			//Giving File Location for Sorted List Output


