//============================================================================
// Name        : Lab4_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab4-3
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

	cout<< "Enter Input File 1 Name:";
	cin >> file1;

	cout<< "Enter Input File 2 Name:";
	cin >> file2;

	cout<< "Enter Output File Name:";
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
	mergeFiles(ifs1, ifs2, ofs3);

		ifs1.close();
		ifs2.close();
		ofs3.close();

	return 0;

}

	void mergeFiles(ifstream &ifs1, ifstream &ifs2, ofstream &ofs3)
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




