/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OvernightPackage.h
 * Author: KJMACBOOK
 *
 * Created on June 9, 2016, 5:19 PM
 */

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#pragma 
#include "Package.h"
#include <string>

//class OVernightPackage should inherit directly from class Package
class OvernightPackage: public Package
{
public:
	OvernightPackage(const std::string, const std::string, const std::string, const std::string, const std::string, 
                         const std::string, const std::string, const std::string, const std::string, const std::string, 	
                         double = 0.0, double = 0.0, double = 0.0);//additional member represents additional fee per ounce

        virtual~OvernightPackage() { }//virtual destructor
        
	//setters and getters
	void setfeePerOunce(double);
	double getfeePerOunce()const;
        
        //keyword virtual signals intent to override
        virtual double calculateCost()const override;//calculate cost
	virtual void print() const override;//print package object

private:
	//private member representing the additional fee per ounce charged for overnight delivery service
	double feePerOunce;
};

#endif /* OVERNIGHTPACKAGE_H */

