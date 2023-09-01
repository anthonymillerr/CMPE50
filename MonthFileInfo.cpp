//============================================================================
// Name        : CMPE50-HW-5-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-5-2
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

class Month{
private:
	int month;

public:
	Month();
	Month(int m);
	Month(char first, char second, char third);					//Constructor Setting Month Using Characters From File Stream
	int letters_to_number(char first, char second, char third); //Returns Month Integer From Letters
	void inputMonth(ifstream& file1);							//Input Integer Function Invoked By File Stream
	void outputMonth(ostream& out);								//Output Integer Function Invoked By Console Stream
	void outputMonthLetters(ostream &out);						//Output Character Function Invoked By Console Stream
	Month nextMonth();											//Member Function Returning Next Month As Value of Type Month
};

int main() {

	ifstream file1("CMPE50-HW-5-2-INPUT1.txt");
		if(file1.fail())										//Checks If File Fails
		{
			cout<<"Error Opening File For Scores." << endl;
			exit(1);
		}

	//Test For Reading Character Input From File1

	Month m1, m2;

	cout<< "\nEnter the Month Characters (3 Characters): ";
	m1.inputMonth(file1);
	cout<< "\nThe Month Number Is: ";
	m1.outputMonth(cout);
	cout<< "The Month Is (As Letters): ";
	m1.outputMonthLetters(cout);
	cout<< "\nThe Month After This Month Is: ";
	m2 = m1.nextMonth();
	m2.outputMonth(cout);

	file1.close();

	return 0;
}
Month::Month(){
		month = 1;
	}
Month::Month(int m){
		month = m;
	}

Month::Month(char first, char second, char third){
	month = letters_to_number(first,second,third);
	}
int Month::letters_to_number(char first, char second, char third){
	first = tolower(first);
	second = tolower (second);
	third = tolower (third);

	if((first == 'j') && (second == 'a') && (third == 'n'))
	{
		month = 1;
	}
	if((first == 'f') && (second == 'e') && (third == 'b'))
	{
		month = 2;
	}
	if((first == 'm') && (second == 'a') && (third == 'r'))
	{
		month = 3;
	}
	if((first == 'a') && (second == 'p') && (third == 'r'))
	{
		month = 4;
	}
	if((first == 'm') && (second == 'a') && (third == 'y'))
	{
		month = 5;
	}
	if((first == 'j') && (second == 'u') && (third == 'n'))
	{
		month = 6;
	}
	if((first == 'j') && (second == 'u') && (third == 'l'))
	{
		month = 7;
	}
	if((first == 'a') && (second == 'u') && (third == 'g'))
	{
		month = 8;
	}
	if((first == 's') && (second == 'e') && (third == 'p'))
	{
		month = 9;
	}
	if((first == 'o') && (second == 'c') && (third == 't'))
	{
		month = 10;
	}
	if((first == 'n') && (second == 'o') && (third == 'v'))
	{
		month = 11;
	}
	if((first == 'd') && (second == 'e') && (third == 'c'))
	{
		month = 12;
	}
	return month;
}
void Month::inputMonth(ifstream& file1){
		char first,second,third;
		file1>>first>>second>>third;
		month = letters_to_number(first,second,third);
}
void Month::outputMonth(ostream& out){
		cout<< month <<endl;
}
void Month::outputMonthLetters(ostream& out){
	if (month == 1){
		cout << "Jan";}
	else if (month == 2){
		cout << "Feb";}
	else if (month == 3){
		cout << "Mar";}
	else if (month == 4){
		cout << "Apr";}
	else if (month == 5){
		cout << "May";}
	else if (month == 6){
		cout << "Jun";}
	else if (month == 7){
		cout << "Jul";}
	else if (month == 8){
		cout << "Aug";}
	else if (month == 9){
		cout << "Sep";}
	else if (month == 10){
		cout << "Oct";}
	else if (month == 11){
		cout << "Nov";}
	else if (month == 12){
		cout << "Dec";}
}
Month Month::nextMonth(){
	int next = ((month % 12) + 1);
	return Month(next);
}

//File 1 Content: "oct"
//Output (Input From Text Files):

//Enter the Month Characters (3 Characters):
//The Month Number Is: 10
//The Month Is (As Letters): Oct
//The Month After This Month Is: 11
