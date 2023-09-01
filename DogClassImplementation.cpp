/*
 * Dog.cpp
 *
 *  Created on: Nov 28, 2022
 *      Author: anthonymiller
 */

#include <iostream>
#include "Pet.h"
#include "Dog.h"

using namespace std;

Dog::Dog():Pet(){
	breed = "";
	dateOfShots = new string("");
}
Dog::~Dog(){
	//Left Blank Intentionally
}
string Dog::getBreed(){
	return breed;
}
string* Dog::getDateOfShots(){
	return dateOfShots;
}
Dog::Dog(string n, int a, string* dateOfVisit, string b, string* dateOfShot):Pet(n,a,dateOfVisit){
	breed = b;
	dateOfShots = dateOfShot;
}
Dog::Dog(const Dog& d){
	breed = d.breed;
	dateOfShots = d.dateOfShots;
}
void Dog:: setBreed(string b){
	breed = b;
}
void Dog:: setDateOfShots(string* dateOfShot){
	dateOfShots = dateOfShot;
}
void Dog:: print(){
	Pet::print();
	cout<<"Breed Of Dog: "<< breed<<endl;
	cout<<"Dates Of Shots: "<< *dateOfShots<<endl;
}
bool operator == (const Dog &dog1, const Dog &dog2){
	return ((dog1.breed == dog2.breed) && (dog1.dateOfShots == dog2.dateOfShots));
}

