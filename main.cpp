//============================================================================
// Name        : Lab10_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab10_02 main
//============================================================================

#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

void myDraw(Figure *fig)
{
    fig->draw();
    cout << "\nmyDraw: Derived class object calling center(). \n";
    fig->center();
}

int main(){
    Figure *fig;

    Triangle *tri = new Triangle;
    fig = tri;
    fig->draw();
    cout << "\nDerived class Triangle object calling center(). \n";
    fig->center();
    myDraw(tri);

    cout << endl;

    Circle *cir = new Circle;
    fig = cir;
    cir->draw();
    cout << "\nDerived class Circle object calling center(). \n";
    cir->center();
    myDraw(cir);

    return 0;
}
