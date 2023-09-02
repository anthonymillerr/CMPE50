//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Figure.h
//============================================================================

#ifndef Figure_h
#define Figure_h

#include <iostream>
using namespace std;

class Figure {
public:
	virtual void erase();
	virtual void draw();
	virtual void center();
};

#endif
