/*
 * Dog.h
 *
 *  Created on: Nov 28, 2022
 *      Author: anthonymiller
 */

#ifndef DOG_H_
#define DOG_H_

#include <iostream>
#include "Pet.h"
#include <string>

using namespace std;

class Dog:public Pet{
private:
	string breed;
	string* dateOfShots;
public:
	Dog();
	virtual ~Dog();
	void setBreed(string);
	void setDateOfShots(string*);
	string getBreed();
	string* getDateOfShots();
	virtual void print();
	Dog(string, int, string*, string, string*);
	Dog(const Dog&);
	friend bool operator == (const Dog&, const Dog&);

};

#endif /* DOG_H_ */
