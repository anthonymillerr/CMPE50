/*
 * manager.h
 *
 *  Created on: Nov 24, 2022
 *      Author: anthonymiller
 */

#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "salariedemployee.h"

using namespace std;

namespace employeessavitch
{
class Manager : public SalariedEmployee
{
public:
	Manager( );
	Manager (Manager & m);
	~Manager();
	Manager& operator=(const Manager m);
	void addReport(SalariedEmployee e);
	friend ostream& operator<<(ostream &outs, Manager& m);

	private:
	int noReport;
	SalariedEmployee* salEmp;
};
}
#endif //MANAGER_H
