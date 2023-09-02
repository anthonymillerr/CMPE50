//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Figure.cpp
//============================================================================

#include <iostream>
#include "Figure.h"
using namespace std;

void Figure::erase() {
	cout << "Erase Figure" << endl;
}

void Figure::draw() {
	cout << "Draw Figure" << endl;
}

void Figure::center() {
	cout << "Center Figure" << endl;
	cout << " ";
	erase();
	cout << " ";
	draw();
}
