//============================================================================
// Name        : Lab2_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab2_02
//============================================================================

#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter a value for N: ";
	cin >> N;

	char str[N];
	cout << "Enter a Sentence for size N. Include a '!' If Wanted: \n ";

	cin>>str;
	bool exclamation = false;

	for(int i = N; i >=0; i-- )
	{
		if(str[i]== '!'){
			i--;
			exclamation = true;
		}
		if (exclamation){
			cout << str[i];
		}
	}

	return 0;
}

/*Enter a value for N: 6
*Enter a Sentence for size N. Include a '!' If Wanted:
*abcde!
*The Reverse Order of the Sentence is:
*!edcba
*The Sentence Ends with a '!'.
 */
