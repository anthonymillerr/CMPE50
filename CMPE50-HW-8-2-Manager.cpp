/*
 * manager.cpp
 *
 *  Created on: Nov 24, 2022
 *      Author: anthonymiller
 */
#include <iostream>
#include <string>
#include "manager.h"

using namespace std;

namespace employeessavitch
{
Manager::Manager( ) : SalariedEmployee( ), noReport(0), salEmp(NULL)
{
//deliberately empty
}

Manager::Manager(Manager &m) : noReport(m.noReport)
{
SalariedEmployee *newArray = new SalariedEmployee[m.noReport];

for(int i = 0; i < noReport; i++) {
newArray[i].set_name(m.salEmp[i].get_name());
newArray[i].set_net_pay(m.salEmp[i].get_net_pay());
newArray[i].set_salary(m.salEmp[i].get_salary());
newArray[i].set_ssn(m.salEmp[i].get_ssn());
}

salEmp = newArray;
}

Manager::~Manager( )
{
if(salEmp != NULL)
delete[] salEmp;
noReport = 0;
}

Manager& Manager::operator=(const Manager m)
{
noReport = m.noReport;
SalariedEmployee *newArray = new SalariedEmployee[m.noReport];

for(int i = 0; i < noReport; i++) {
newArray[i].set_name(m.salEmp[i].get_name());
newArray[i].set_net_pay(m.salEmp[i].get_net_pay());
newArray[i].set_salary(m.salEmp[i].get_salary());
newArray[i].set_ssn(m.salEmp[i].get_ssn());
}
salEmp = newArray;
return *this;
}

void Manager::addReport(SalariedEmployee e)
{
SalariedEmployee *newArray = new SalariedEmployee[noReport + 1];

	for(int i = 0; i < noReport; i++) {
		newArray[i].set_name(salEmp[i].get_name());
		newArray[i].set_net_pay(salEmp[i].get_net_pay());
		newArray[i].set_salary(salEmp[i].get_salary());
		newArray[i].set_ssn(salEmp[i].get_ssn());
	}
		newArray[noReport].set_name(e.get_name());
		newArray[noReport].set_net_pay(e.get_net_pay());
		newArray[noReport].set_salary(e.get_salary());
		newArray[noReport].set_ssn(e.get_ssn());

	noReport++;
	SalariedEmployee *temp = salEmp;
	salEmp = newArray;
	if(temp != NULL)
	delete[] temp;
}

ostream& operator<<(ostream &outs, Manager& m)
{
	for(int i = 0; i < m.noReport; i++) {
		m.salEmp[i].set_net_pay(m.salEmp[i].get_salary());
		outs << "\n__________________________________________________\n";
		outs << "Pay to the order of " << m.salEmp[i].get_name( ) << endl;
		outs << "The sum of " << m.salEmp[i].get_net_pay( ) << " Dollars\n";
		outs << "_________________________________________________\n";
		outs << "Check Stub NOT NEGOTIABLE \n";
		outs << "Employee Number: " << m.salEmp[i].get_ssn( ) << endl;
		outs << "Salaried Employee. Regular Pay: " << m.salEmp[i].get_salary() << endl;
		outs << "_________________________________________________\n";
		outs << "\n";
	}
		return outs;
}
}
