/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h"

using namespace std;

//constructor
TwoDayPackage::TwoDayPackage
	(const string sendername, const string senderaddress, const string sendercity, const string senderstate,
	const string senderzip,
	const string receivername, const string receiveraddress, const string receivercity, const string receiverstate,
	const string receiverzip, double weight, double cost, double ff)
	//explicitly call base-class constructor
	: Package (sendername, senderaddress, sendercity, senderstate, senderzip, 
			   receivername, receiveraddress, receivercity, receiverstate, receiverzip, weight, cost)
{
	flatFee = ff;
}

//set the flat fee
void TwoDayPackage::setflatFee(double ff)
{
	flatFee = ff; 
}//end set flat fee method

//redefine calculateCost to compute the shipping cost by adding the flat fee to the weight-based cost calculated by 
//base class Packages calculateCost function
double TwoDayPackage::calculateCost()
{
	double total;
	
	total = flatFee + Package::calculateCost();
	return total;
}

//print Package object
void TwoDayPackage::print() const
{
	cout << "Package details from shipper: \n"
		<< "\nName of sender: " << getsenderName()
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

TwoDayPackage::~TwoDayPackage()
{
}
