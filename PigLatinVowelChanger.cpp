//============================================================================
// Name        : CMPE-HW-4-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW-4-3
//============================================================================

#include <iostream>
#include <string>

using namespace std;

bool vowel(char c){	 // determines what is considered a vowel
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string convertName(string str){ //based on vowel or consonant of first character in string, adds pig latin ending to name
	if(vowel(str[0])){
		str += "way";
	} else{
		str = str.substr(1) + str[0];
		str += "ay";
	}
	return str; //returns the new name
}

string lowercase(string str){ //converts previous section of name to lowercase
	string lower;
	for (int i=0; i < str.size(); ++i){
		lower += (char) tolower(str[i]);
	}
	return lower;
}

int main() {
	string first, last;
	cout<< "Enter First Name:" << endl;
	cin >> first;
	cout<< "Enter Last Name:" << endl;
	cin >> last;

	first = convertName(lowercase(first)); //new first name carried out by functions
	last = convertName(lowercase(last)); //new last name carried out by functions

	first[0]=toupper(first[0]); //changes first letter to uppercase
	last[0]=toupper(last[0]); //changes first letter to uppercase

	cout<< "New First Name: " << first << "\nNew Last Name: " << last << endl;
}
//Output on Screen:
/*
Enter First Name:
Anthony
Enter Last Name:
Miller
New First Name: Anthonyway
New Last Name: Illermay
*/

