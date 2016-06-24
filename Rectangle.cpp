/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

//9.11 Rectangle constructor initializes each data member to 1, 1, 0, & 0.
Rectangle::Rectangle()
            : length(1), width(1), perimeter(0), area(0)
            {
            }//end Rectangle constructor

//9.12, The constructor calls the set function that accepts four sets of coordinates and verifies that each of these...
//is in the first quadrant with no single x- or y-coordinate larger than 20.0...
//Provide member functions that calculate the length, width, perimeter and area...
//The length is the larger of the two dimensions...
//Include a predicate function square that determines whether the rectangle is a square.
void Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    //The set function also verifies that the supplied coordinates do, in fact, specify a rectangle...
    setRectangle(x1, y1, x2, y2, x3, y3, x4, y4);
}//end Rectangle constructor

//9.11 Also, provide set and get functions for the length and width attributes.
//setters and getters
//9.11Set functions should verify that length & width are floating-point numbers larger than 0.0, less than 20.0
void Rectangle::setLength(double l)
{
    if (l > 0.0 && l <= 20.0)
        length = l;
    else
        throw invalid_argument("length must be 0.0 - 20.0");
}//end function setLength

void Rectangle::setWidth(double w)
{
	if (w > 0.0 && w <= 20.0)
        width = w;
    else
        throw invalid_argument("width must be 0.0 - 20.0");
}//end function setWidth

//return length
double Rectangle::getLength() const
{
    return length;
}//end function getLength

//return width
double Rectangle::getWidth() const
{
    return width;
}//end function getWidth

//9.11 Provide member functions that calculate the perimeter area and the area of the rectangle
double Rectangle::getPerimeter() const
{
    return 2 * (length + width);
}

double Rectangle::getArea() const
{
    return length * width;
}

//print methods
void Rectangle::printLength() const
{
    cout << getLength();
}

//deconstructor
Rectangle::~Rectangle(void)
{
}

















