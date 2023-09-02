//============================================================================
// Name        : Lab4_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab4-1
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

	ifstream ifs;
	ofstream ofs;
	char iarray[1000];
	int count, i;
	char ch;

	ifs.open("LabInput4-1.txt");

	if(ifs.fail())
	{
		cout<<"Error Opening File"<< endl;
		exit(1);
	}

	count = 0;
	while (ifs >> iarray[count++])
	{
	}

	ifs.close();

	ofs.open("Output.txt", ios::out);

	for (i=0; i<count-1;i++)
	{
		ch=iarray[i];

		if(ch != ' ' && ch != '\n' && ch != '.'&& ch != '!'&& ch != '?')
		{
			ofs << (char)(toupper(ch));
		}
	}

	ofs.close();
	cout << "\nFile Has Been Modified \n";
	return 0;
}
