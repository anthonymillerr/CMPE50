//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Triangle.h
//============================================================================
#ifndef Triangle_h
#define Triangle_h

#include <iostream>
#include "Figure.h"
using namespace std;

class Triangle : public Figure {
public:
	void erase();
	void draw();
	void center();
};

#endif
