/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KJMACBOOK
 *
 * Created on June 13, 2016, 5:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

int main() 
{
    double length;
    double width;
    Rectangle r;//instantiate object r of class Rectangle
    
    cout << "Enter the length of the rectangle: ";
    r.getLength();
    
    cout << "Enter the width of the rectangle: ";
    r.getWidth();
  
    cout << "The perimeter of the rectangle is: " << r.getPerimeter() <<endl;
    cout << "The area is: " << r.getArea() << endl;
       
    //system("pause");
    return 0;
}//end main

