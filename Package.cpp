
#include <iostream>
#include <stdexcept>
#include "Package.h"

using namespace std;

//constructor
Package::Package(const string sname, const string saddress, const string scity, const string sstate, const string szip,
				 const string rname, const string raddress, const string rcity, const string rstate, const string rzip,
				 double weight, double cost)
{
	senderName = sname;
	senderAddress = saddress;
	senderCity = scity;
	senderState = sstate;
	senderZip = szip;

	receiverName = rname;
	receiverAddress = raddress;
	receiverCity = rcity;
	receiverState = rstate;
	receiverZip = rzip;


	setWeight(weight);//validate and store weight
	setCost(cost);//validate and store cost
}

//Sender Information sender
//set name
void Package::setsenderName(const string name)
{
	senderName = name;
}

//return name
string Package::getsenderName()const
{
	return senderName;
}

//set address
void Package::setsenderAddress(const string address)
{
	senderAddress = address;
}

//return address
string Package::getsenderAddress()const
{
	return senderAddress;
}

//set city
void Package::setsenderCity(const string city)
{
	senderCity = city;
}

//return city
string Package::getsenderCity()const
{
	return senderCity;
}

//set state
void Package::setsenderState(const string state)
{
	senderState = state;
}

//return state
string Package::getsenderState()const
{
	return senderState;
}

//set zip
void Package::setsenderZip(const string zip)
{
	senderZip = zip;
}

//return name
string Package::getsenderZip()const
{
	return senderZip;
}

//Receiver Information
//set name
void Package::setreceiverName(const string name)
{
	receiverName = name;
}

//return name
string Package::getreceiverName()const
{
	return receiverName;
}

//set address
void Package::setreceiverAddress(const string address)
{
	receiverAddress = address;
}

//return address
string Package::getreceiverAddress()const
{
	return receiverAddress;
}

//set city
void Package::setreceiverCity(const string city)
{
	receiverCity = city;
}

//return city
string Package::getreceiverCity()const
{
	return receiverCity;
}

//set state
void Package::setreceiverState(const string state)
{
	receiverState = state;
}

//return state
string Package::getreceiverState()const
{
	return receiverState;
}

//set zip
void Package::setreceiverZip(const string zip)
{
	receiverZip = zip;
}

//return name
string Package::getreceiverZip()const
{
	return receiverZip;
}

//set Weight
void Package::setWeight(double weight)
{
	if (weight >= 0.0)
	{
		Weight = weight;
	}
	else
	{
		throw invalid_argument("Package must weigh at least 0.0 ounces: ");
	}
}

//return weight
double Package::getWeight()const
{
	return Weight;
}

//set cost
void Package::setCost(double cost)
{
	if (cost >= 0.0)
	{
		Cost = cost;
	}
	else
	{
		throw invalid_argument("Package must cost at least $0.0: ");
	}
}

//return cost
double Package::getCost()const
{
	return Cost;
}

double Package::calculateCost()const
{
	return  Weight * Cost;
}

//print Package object
void Package::print() const
{
	//get sender package data
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
		<< "\nCost of shipping is: $" << getCost() << endl;

}//end print method

//deconstructor
Package::~Package()
{
}
