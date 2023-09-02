//============================================================================
// Name        : Lab8_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab8_02
//============================================================================

#include <iostream>
using namespace std;

char* delete_repeats(const char str[100], int size){
	char* isSpecial = new char[size];
	int count = 1;
	isSpecial[0] = str[0];

	for(int i = 0; i < size; i++){
		bool isNoRepeat = true;
		for(int j =0; j < count; j++){
			if (str[i] == isSpecial[j]){
				isNoRepeat = false;
			}
		}
	if (isNoRepeat){
		isSpecial[count++] = str[i];
		}
	}

	char* noRepeat = new char[count];
	for(int i = 0;i<count;i++){
		noRepeat[i]=isSpecial[i];
	}
	return noRepeat;
}

int main() {
	char str[100] = "to be or not to be";
	int size = strlen(str);
	char *noRepeat;
	noRepeat = delete_repeats(str, size);

	cout<< noRepeat << endl;

	delete [] noRepeat;

	return 0;
}
