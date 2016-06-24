/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Package.h
 * Author: KJMACBOOK
 *
 * Created on June 7, 2016, 5:17 PM
 */

#ifndef PACKAGE_H
#define PACKAGE_H
#pragma 
#include <string> //C++ standard string class 

class Package
{
public:
	//constructor for class Package, in which all data members have been initialized
	Package(const std::string, const std::string, const std::string, const std::string, const std::string,
			const std::string, const std::string, const std::string, const std::string, const std::string,
			double = 0.0, double = 0.0);

	//setters and getters for class Package sender
	void setsenderName(const std:: string);
	std::string getsenderName()const;

	void setsenderAddress(const std::string);
	std::string getsenderAddress()const;

	void setsenderCity(const std::string);
	std::string getsenderCity()const;

	void setsenderState(const std::string);
	std::string getsenderState()const;

	void setsenderZip(const std::string);
	std::string getsenderZip()const;

	//setters and getters for class Package receiver
	void setreceiverName(const std:: string);
	std::string getreceiverName()const;

	void setreceiverAddress(const std::string);
	std::string getreceiverAddress()const;

	void setreceiverCity(const std::string);
	std::string getreceiverCity()const;

	void setreceiverState(const std::string);
	std::string getreceiverState()const;

	void setreceiverZip(const std::string);
	std::string getreceiverZip()const;

	//setters and getters for class Package methods
	void setWeight(double);
	double getWeight()const;

	void setCost(double);
	double getCost()const;

	//public member methods
	double calculateCost()const;//calculate cost

	void print() const;//print package object

	//deconstructor
	~Package();

private:
	//private members 
	//sender
	std::string senderName;
	std::string senderAddress;
	std::string senderCity;
	std::string senderState;
	std::string senderZip;

	//receiver
	std::string receiverName;
	std::string receiverAddress;
	std::string receiverCity;
	std::string receiverState;
	std::string receiverZip;

	//additional methods
	double Weight;
	double Cost;
};

#endif /* PACKAGE_H */