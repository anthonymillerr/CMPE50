//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Circle.h
//============================================================================

#ifndef Circle_h
#define Circle_h

#include <iostream>
#include "Figure.h"
using namespace std;

class Circle : public Figure {
public:
	void erase();
	void draw();
	void center();
};

#endif
