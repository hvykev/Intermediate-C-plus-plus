/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: KJMACBOOK
 *
 * Created on June 13, 2016, 5:46 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle class definition
class Rectangle
{
public:
     //9.11 Create a class Rectangle with attributes length & width, defaulted to 1
    Rectangle();//constructor
    //9.12, add a new Constructor that will take input of 8 integers in pairs (x1, y1), (x2, y2) and so on...
    //9.12, First, you need to find the distance between 2 points and that will be your line...
    //9.12, Be sure you ask for the points in the correct order so the lines do not crisscross through the center!...
    //9.12, The lines will ultimately become the length or the width.
    Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);//4 pairs of integers

	//9.11 setters
	void setLength(double);
	void setWidth(double);
	void setPerimeter()const;
	void setArea()const;
        //9.12 setters
        void setRectangle(int,int,int,int,int,int,int,int);
        void setx1(int);
        void sety1(int);
        void setx2(int);
        void sety2(int);
        void setx3(int);
        void sety3(int);
        void setx4(int);
        void sety4(int);

	//9.11 getters
	double getLength() const;
	double getWidth() const;
	double getPerimeter() const;
	double getArea() const;
        //9.12 getters
        int getRectangle() const;
        int getx1()const;
        int gety1()const;
        int getx2()const;
        int gety2()const;
        int getx3()const;
        int gety3()const;
        int getx4()const;
        int gety4()const;
        
        void printLength() const;
        void printWidth() const;
        void printRectangle() const;

	//deconstructor
	~Rectangle(void);

private:
	//9.11 declarations
	double length;
	double width;
	double perimeter;
	double area;
        
        //9.12 declarations
        int rectangle;
        int getx1;
        int gety1;
        int getx2;
        int gety2;
        int getx3;
        int gety3;
        int getx4;
        int gety4;
};//end class Rectangle

#endif /* RECTANGLE_H */

