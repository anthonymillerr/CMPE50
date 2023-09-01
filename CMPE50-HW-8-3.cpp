//============================================================================
// Name        : CMPE50-HW-8-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 8-3
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;

void PrintBill(Pet*);

int main() {
	Pet* pet;

	Pet p;
	p.setAge(2);
	p.setName("Garfield");
	p.setDateOfVisits(new string("11/28/2022"));

	pet = &p;

	cout<<"Pet Information: \n";
	PrintBill(pet);

	Dog d;
	d.setAge(3);
	d.setName("Snoopy");
	d.setDateOfVisits(new string("11/24/2022"));
	d.setBreed("Beagle");
	d.setDateOfShots(new string("11/24/2022"));

	pet = &d;

	cout<< "\nDog Information: \n";
	PrintBill(pet);
	return 0;
}
void PrintBill(Pet *p){
	p->print();
}

//OUTPUT:
//
//Pet Information:
//Name Of Pet: Garfield
//Age Of Pet: 2
//Dates Of Visits: 11/28/2022
//
//Dog Information:
//Name Of Pet: Snoopy
//Age Of Pet: 3
//Dates Of Visits: 11/24/2022
//Breed Of Dog: Beagle
//Dates Of Shots: 11/24/2022
