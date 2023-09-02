//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Triangle.cpp
//============================================================================

#include "Triangle.h"
using namespace std;

void Triangle::erase() {
	cout << "Erase Triangle" << endl;
}

void Triangle::draw() {
	cout << "Draw Triangle" << endl;
}

void Triangle::center() {
	cout << "Center Triangle" << endl;
	cout << "";
	erase();
	cout << "";
	draw();
}
