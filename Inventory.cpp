/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Inventory.h"
#include <string>
using namespace std;

//default Inventory constructor
Inventory::Inventory(const string &name, int qtyValue, double perUnitValue)
: qty(qtyValue), perUnit(perUnitValue)
{
    setName(name);
}//end Inventory constructor

//get name
string Inventory::getName() const
{
    return name;
}//end function

//set name
void Inventory::setName(const string &nameString)
{
    //copy at most 25 characters from string to name
    int length = nameString.size();
    length = (length < 25 ? length : 24);
    nameString.copy(name, length);
    name[length] = '\0';//append null character to name
}//end function setName

//getQty
int Inventory::getQty() const
{
    return qty;
}//end function getQty

//setQty value
void Inventory::setQty(int qtyValue)
{
    qty = qtyValue;//should validate
}//end function setQtyValue

//get perUnit value
double Inventory::getPerUnit() const
{
    return perUnit;
}//end function getPerUnit

//set perUnit value
void Inventory::setPerUnit(double perUnitValue)
{
    perUnit = perUnitValue;
}//end function setPerUnit

//display Inventory function
void Inventory::displayInventory() const
{
    cout<< "\nName is: " << getName()
        << "\nQuantity is: " << getQty()
	<< "\nPrice is: " << getPerUnit();
}

























