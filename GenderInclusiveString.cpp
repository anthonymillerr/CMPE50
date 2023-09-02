//============================================================================
// Name        : Lab5_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab5_02
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;
string sWord[]={"he", "she", "him", "her", "his", "hers","He", "She", "Him", "Her", "His", "Hers"};

string strWord[]={"she or he","she or he", "her or him","her or him", "her(s) or his","her(s) or his",
				"she or he","she or he", "her or him","her or him", "her(s) or his","her(s) or his"};

bool IsAlphabet(char ch)
{
	if(((ch>='A') && (ch<='Z'))||((ch>='a') && (ch<= 'z')))
		return true;
	return false;
}

string replace(string word)
{
	string rep="";
	for(int i=0; i<12;i++)
	{
		if(sWord[i]==word)
		{
			rep=strWord[i];
		}
	}
	if(rep.compare("")==0)
		rep=word;
	return rep;
}

int main() {
	string output="";
	char next_symbol;
	string word="";


	while(true)
	{
		output="";
	do
	{
		word="";

		while(true)
		{
			cin.get(next_symbol);
			if(IsAlphabet(next_symbol))
			{
			word += next_symbol;
			}
			else
			{
				break;
			}
		}
	if(word.compare("done")==0)
	break;
	output=output+replace(word);
	output=output+next_symbol;
	}
	while(next_symbol!='\n');

	cout<< "New String:\n"<<output<<endl;
	string option="";
	cout<<"Would You Like To Enter Another Sentence? (Yes/No)";
	cin>>option;
	if(option=="No")
		break;
		cin.ignore();
	}
	return 0;
}
