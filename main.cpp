/** \file main.cpp
	\brief Rectangular function
	\author Kail Trimming

	first version of this software; all the functions are in this file  
*/

#include <iostream>
#include "CRectangle.h"
#include<cstring>

using namespace std;

int main() {
    // Test costruttori
    cout << "Test costruttori:" << endl;
    Rectangle r1;
    Rectangle r2(5.0, 10.0);
    Rectangle r3(r2);

    // Test metodi Get e Set
    cout << "\nTest metodi Get e Set:" << endl;
    float width, height;
    r2.GetDim(width, height);
    cout << "Dimensioni r2: " << width << " x " << height << endl;

    r1.SetWidth(5.0);
    r1.SetHeight(15.0);
    cout << "Nuove dimensioni r1: " << r1.GetWidth() << " x " << r1.GetHeight() << endl;

    // Test area e perimetro
    cout << "\nTest calcolo area e perimetro:" << endl;
    cout << "Area r2: " << r2.GetArea() << endl;
    cout << "Perimetro r2: " << r2.GetPerimeter() << endl;

    // Test Dump
    cout << "\nTest metodo Dump:" << endl;
    r1.Dump();
    r2.Dump();
    r3.Dump();

    return 0;
}