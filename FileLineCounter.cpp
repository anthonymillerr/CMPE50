//============================================================================
// Name        : CMPE50-HW-4-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : HW-4-1
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	ifstream in("CMPE50-HW-4-1-INPUT.txt"); // Take Input File with Text

	if(in.fail())							// Check If File Opens
	{
		cout<<"Error Opening File"<< endl;
		exit(1);
	}

	char c;	//Initialize Character For Number Count
	int i = 1;

	cout<<right<<setw(3)<<i<<": "; //Format

	while(in.get(c)){ //Number Count While Loop
		cout<<c;
	if(c=='\n'){
		i++;
	cout<<right<<setw(3)<<i<<": "; //Format for Following Lines
	}
	}
	return 0;
}

//Output on Screen:
/*
  1: With three or four    loggerheads amongst three or four
  2: score   hogsheads.     I have sounded     the very
  3:   base-string of humility.  Sirrah,   I am   sworn brother
  4: to a leash of drawers;    and can call them all by
  5: their christen names, as Tom,    Dick, and Francis.
  6:   They take it already upon       their salvation, that
  7: though I be but the prince of    Wales, yet I am king
  8: of   courtesy; and tell me flatly I am no proud   Jack,
  9:    like Falstaff, but a    Corinthian, a lad of mettle, a
 10: good boy, by the Lord, so they call me,   and when I
 11: am king of    England, I shall    command all the good
 12: lads in Eastcheap.
 */

