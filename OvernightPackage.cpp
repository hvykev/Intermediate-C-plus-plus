/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdexcept>
#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage
   (const string sendername, const string senderaddress, const string sendercity, const string senderstate,
	const string senderzip,
	const string receivername, const string receiveraddress, const string receivercity, const string receiverstate,
	const string receiverzip, double weight, double cost, double fpo)
	//explicitly call base-class constructor
	: Package (sendername, senderaddress, sendercity, senderstate, senderzip, 
			   receivername, receiveraddress, receivercity, receiverstate, receiverzip, weight, cost)
{
	feePerOunce = fpo;
}

void OvernightPackage::setfeePerOunce(double fpo)
{
	feePerOunce = fpo;
}

//redefine calculateCost so that it adds additional fee per ounce to the standard cost per ounce 
//before calculating shipping cost
double OvernightPackage::calculateCost()const
{
	return ((getCost() + feePerOunce) * getWeight());
}

//print Package object
void OvernightPackage::print() const
{
	cout<< "\nName of sender: " << getsenderName()
		<< "\nAddress is: " << getsenderAddress()
		<< "\nCity is: " << getsenderCity()
		<< "\nState is: " << getsenderState()
		<< "\nZip Code is: " << getsenderZip();

	//get receiver package data	 
	cout<< "\n\t\t\tName of sender: " << getreceiverName()
		<< "\n\t\t\tAddress is: " << getreceiverAddress()
		<< "\n\t\t\tCity is: " << getreceiverCity()
		<< "\n\t\t\tState is: " << getreceiverState()
		<< "\n\t\t\tZip Code is: " << getreceiverZip()


		<< "\n\nWeight per lbs: " << getWeight()
		<< "\nCost of shipping is: $" << getCost();

}//end print method


