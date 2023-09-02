//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Circle.cpp
//============================================================================

#include "Circle.h"
using namespace std;

void Circle::erase() {
	cout << "Erase Circle" << endl;
}

void Circle::draw() {
	cout << "Draw Circle" << endl;
}

void Circle::center() {
	cout << "Center Circle" << endl;
	cout << "";
	erase();
	cout << "";
	draw();
}
