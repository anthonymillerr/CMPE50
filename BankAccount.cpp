//============================================================================
// Name        : CMPE50-HW-5-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CMPE50-HW-5-1
//============================================================================

#include <iostream>
using namespace std;

class CDAccount{
private:
	double balance;
	double interest_rate;
	int term;

public:
	double getInitialBalance();
	double getBalanceMaturity();
	double getInterestRate();
	int getTerm();
	CDAccount();
	CDAccount(double bal, double rate, int t);
	void in(istream&);
	void out(ostream&);
};

int main() {

	CDAccount my_account = CDAccount(100.0, 10.0, 6); //Pre-Defined Input From 10.1
	cout<< "Enter Account Interest Rate: " << my_account.getInterestRate() <<"%"<< endl;
	cout<< "Enter Account Balance: $" << my_account.getInitialBalance() << endl;
	cout<< "Enter CD Number Of Months Until Maturity:\n"
			<< "(must be 12 or fewer months): " << my_account.getTerm() << " Months" << endl;
	cout<< "Account Balance At Maturity Is: $" << my_account.getBalanceMaturity()<< endl;
	my_account.out(cout);

	my_account.in(cin);									//Input From Console
	cout<< "Account Interest Rate: " << my_account.getInterestRate() <<"%"<< endl;
	cout<< "Account Balance: $" << my_account.getInitialBalance() << endl;
	cout<< "Number Of Months Until Maturity:\n"
		<< "(must be 12 or fewer months): " << my_account.getTerm() << " Months" << endl;
	cout<< "Account Balance At Maturity Is: $" << my_account.getBalanceMaturity()<< endl;
	my_account.out(cout);
	return 0;
}

CDAccount::CDAccount(){			//Default Constructor
	balance = 0.0;
	interest_rate = 0.0;
	term = 0;
}
CDAccount::CDAccount(double bal, double rate, int t){	//Sets All Member Variables To Specified Values
	balance = bal;
	interest_rate = rate;
	term = t;
}
double CDAccount::getInterestRate(){		//Returns Interest Rate
	return interest_rate;
}
double CDAccount::getInitialBalance(){		//Returns Initial Balance
	return balance;
}
double CDAccount::getBalanceMaturity(){		//Returns Balance Maturity
	double rate_fraction, interest;
	rate_fraction = interest_rate/100.0;
	interest = balance * rate_fraction * (term/12.0);
	balance = balance + interest;
	return balance;
}
int CDAccount::getTerm(){					//Returns Term
	return term;
}
void CDAccount::in(istream& in){			//Input From Console
	cout<< "\nEnter Account Initial Balance: (in $)" << endl;
	in >> balance;
	cout<< "\nEnter Account Interest Rate: (in %)" << endl;
	in >> interest_rate;
	cout<< "\nEnter The Number Of Months Until Maturity:\n"
		<< "(must be 12 or fewer months): " << endl;
	in >> term;
}
void CDAccount::out(ostream& out){			//Output From Console
	out.setf(ios::fixed);
	out.setf(ios::showpoint);
	out.precision(2);
	out << "\nWhen CD Matures In "
		<< term << " Months,\n"
		<< "It Will Have A Balance of $"
		<< balance << endl;
}

//Output:

//Enter Account Interest Rate: 10%				//Testing Pre-Defined Inputs
//Enter Account Balance: $100
//Enter CD Number Of Months Until Maturity:
//(must be 12 or fewer months): 6 Months
//Account Balance At Maturity Is: $105
//
//When CD Matures In 6 Months,
//It Will Have A Balance of $105.00
//
//Enter Account Initial Balance: (in $)			//Testing Inputs From Console
//200
//
//Enter Account Interest Rate: (in %)
//20
//
//Enter The Number Of Months Until Maturity:
//(must be 12 or fewer months):
//6
//Account Interest Rate: 20.00%
//Account Balance: $200.00
//Number Of Months Until Maturity:
//(must be 12 or fewer months): 6 Months
//Account Balance At Maturity Is: $220.00
//
//When CD Matures In 6 Months,
//It Will Have A Balance of $220.00
//
