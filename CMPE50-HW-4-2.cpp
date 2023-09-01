//============================================================================
// Name        : CMPE50-HW-4-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW-4-2
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int wordCount(char str[50]); //function to find word count
int letterCount(char str[50]); //function to find letter count

int main() {

	char str[50];

	cout<<"Enter A Line of Text:";
	cin.getline(str,50); //reads line of text
	int result = letterCount(str);
	cout<<"\nThe Number of Letters = " << result;
	cout<<"\n\nThe Number of Words = " << wordCount(str)<< endl;


	return 0;
}

int wordCount(char str[50]){ //word count function
	int count = 0;
	char delim[]=" ,.\n\t ";
	char *words,*ptr;

	ptr = str;
	while((words = strtok(ptr,delim)) != '\0') //words are counted based on delimiter
		{
		count++;
		ptr = '\0';
		}
	return count; //returns word count
}

int letterCount(char str[50]){ //letter count function
	int length = strlen(str); //reads length of string
	int count = 0;

	for(int i = 0; i < length; i++)
		if(isalpha(str[i])) //counts alphabet characters
			count++;
	return count;  //returns letter count
}

//Output on Screen:
/*
Enter A Line of Text: Now, is the Winter of our discontent.

The Number of Letters = 29

The Number of Words = 7
*/
