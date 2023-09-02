//============================================================================
// Name        : Lab5_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab5_01
//============================================================================

#include <iostream>
#include <cstring>


using namespace std;

bool IsWhitespace(char ch)
{
	if(ch == ' '||ch == '\t'||ch =='\n'||ch =='\r')
		return true;
	return false;
}

int main()
{
	char str[200];
	char nstr[100];

	int j = 0;

	cin.getline(str,200,'.');
	bool is_firstblank = false;
	bool is_initial = true;

	for(int i = 0; i < 200; i++)
	{
		if(IsWhitespace(str[i]))
		{
			if(is_initial)
			{
				continue;
			}
			if(is_firstblank == false)
			{
				nstr[j] = ' ';
				j++;
				is_firstblank = true;
			}
		}
		else
		{
			if (is_initial)
			{
				is_initial = false;
			}
			is_firstblank = false;
			nstr[j] = tolower(str[i]);
			j++;
		}

	}
	nstr[j]= '\0';
	nstr[0] = toupper(nstr[0]);
	for(int i=1; i < 200; i++)
	{
		if (nstr[i-1]== ' ')
			nstr[i]=toupper(nstr[i]);
	}

	cout<< "New Sentence Is:\n" << endl;
	cout<< nstr << "." <<endl;

	return 0;
}
