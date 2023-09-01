/*
 * Pet.h
 *
 *  Created on: Nov 28, 2022
 *      Author: anthonymiller
 */

#ifndef PET_H_
#define PET_H_

#include <iostream>
#include <string>

using namespace std;

class Pet{
private:
	string name;
	int age;
	string *dateOfVisits;

public:
	Pet();
	Pet(string, int, string*);
	virtual ~Pet();

	string getName();
	int getAge();
	string* getDateOfVisits();

	void setName(string);
	void setAge(int);
	void setDateOfVisits(string*);

	virtual void print();
	Pet(const Pet&);
	friend bool operator == (const Pet&, const Pet&);
};

#endif /* PET_H_ */
