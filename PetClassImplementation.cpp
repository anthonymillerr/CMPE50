/*
 * Pet.cpp
 *
 *  Created on: Nov 28, 2022
 *      Author: anthonymiller
 */

#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet(){
	name = "";
	age = 0;
	dateOfVisits = new string(" ");
}
Pet::Pet(string n, int a, string* dateOfVisit){
	name = n;
	age = a;
	dateOfVisits = dateOfVisit;
}
Pet::Pet(const Pet &pet){
	dateOfVisits=0;
	name = pet.name;
	age = pet.age;
	*dateOfVisits = *pet.dateOfVisits;
}
void Pet::setName(string n){
	name = n;
}
void Pet::setAge(int a){
	age = a;
}
void Pet::setDateOfVisits(string* dateOfVisit){
	dateOfVisits = dateOfVisit;
}
string Pet::getName(){
	return name;
}
int Pet::getAge(){
	return age;
}
string* Pet::getDateOfVisits(){
	return dateOfVisits;
}
void Pet::print(){
	cout<<"Name Of Pet: "<<name<<endl;
	cout<<"Age Of Pet: "<<age<<endl;
	cout<<"Dates Of Visits: "<< *dateOfVisits<<endl;
}
Pet::~Pet(){
	//Left Blank Intentionally
}
bool operator == (const Pet& pet1, const Pet& pet2){
	return ((pet1.name.compare(pet2.name) == 0) && (pet1.age == pet2.age)
	&& (pet1.dateOfVisits == pet2.dateOfVisits));
}
