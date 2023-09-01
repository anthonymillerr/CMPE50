//============================================================================
// Name        : CMPE50-HW-8-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 8-2
//============================================================================

#include <iostream>
#include "manager.h"

using namespace std;
using namespace employeessavitch;

int main() {
Manager m;
m.addReport(SalariedEmployee("James Lee", "#1001", 450));
m.addReport(SalariedEmployee("Matilda Johnson", "#1002", 590));
m.addReport(SalariedEmployee("Mike Miller", "1003", 620));
m.addReport(SalariedEmployee("Debra Molina", "1004", 160));

cout << m;

return 0;
}

//OUTPUT:
//__________________________________________________
//Pay to the order of James Lee
//The sum of 450 Dollars
//_________________________________________________
//Check Stub NOT NEGOTIABLE
//Employee Number: #1001
//Salaried Employee. Regular Pay: 450
//_________________________________________________
//
//
//__________________________________________________
//Pay to the order of Matilda Johnson
//The sum of 590 Dollars
//_________________________________________________
//Check Stub NOT NEGOTIABLE
//Employee Number: #1002
//Salaried Employee. Regular Pay: 590
//_________________________________________________
//
//
//__________________________________________________
//Pay to the order of Mike Miller
//The sum of 620 Dollars
//_________________________________________________
//Check Stub NOT NEGOTIABLE
//Employee Number: 1003
//Salaried Employee. Regular Pay: 620
//_________________________________________________
//
//
//__________________________________________________
//Pay to the order of Debra Molina
//The sum of 160 Dollars
//_________________________________________________
//Check Stub NOT NEGOTIABLE
//Employee Number: 1004
//Salaried Employee. Regular Pay: 160
//_________________________________________________
