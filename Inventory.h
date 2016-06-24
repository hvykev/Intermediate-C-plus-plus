/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: KJMACBOOK
 *
 * Created on June 21, 2016, 2:48 PM
 */

#pragma 
#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <string>//C++ standard string class

class Inventory
{
public:
    //default Inventory constructor
    Inventory(const std::string & = "", int = 0, double = 0.0);
    
    //setters & getters
    //accessor function for name
    void setName(const std::string &);
    std::string getName() const;
    
     //accessor function for qty
    void setQty(int);
    int getQty() const;
    
     //accessor function for perUnit
    void setPerUnit(double);
    double getPerUnit() const;
    
    void displayInventory()const;//display Inventory function
    
    //Destructor
   // ~Inventory();
private:
    char name[25];
    int qty;
    double perUnit;
};//end class Inventory

#endif /* INVENTORY_H */

