/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoDayPackage.h
 * Author: KJMACBOOK
 *
 * Created on June 9, 2016, 5:17 PM
 */

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"
#include <string>

//Derived class TwoDaypackage inherits the functionality of base class Package
class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const std::string, const std::string, const std::string, const std::string, const std::string, 
				  const std::string, const std::string, const std::string, const std::string, const std::string, 
			      double = 0.0, double = 0.0, double = 0.0);//includes/initializes data member to represent flatFee
	
	//setters and getters for class TwoDayPackage : Package
	void setflatFee(double);//set flatFee
	double getflatFee()const;//getflatFee

	//redefine member function calculateCost
	double calculateCost();

	void print() const;//print package object

	//deconstructor
	~TwoDayPackage();

private:
	double flatFee;

};//end class TwoDayPackage
#endif /* TWODAYPACKAGE_H */

