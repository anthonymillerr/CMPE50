//============================================================================
// Name        : Lab6_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab6_02
//============================================================================

#include <iostream>
using namespace std;

class Counter {
private:
int count;

public:
	Counter() {
		count = 0;
	}

	Counter(int val) {
		if (val >= 0) count = val;
		else cout << "The counter cannot become negative." << endl;
	}

	int getCount() {
		return count;
	}

	void incrementCounter() {
		count++;
	}

	void decrementCounter() {
		if (count > 0) count--;
		else cout << "The counter cannot become negative." << endl;;
	}

	void outputCounter(ostream &output = cout) {
		output << count << endl;;
	}
};

int main() {

Counter counter;
Counter counter2(9);

counter.outputCounter();
counter2.outputCounter();

counter.incrementCounter();
counter2.decrementCounter();

counter.outputCounter();
counter2.outputCounter();

counter.decrementCounter();
counter.decrementCounter();

return 0;
}
