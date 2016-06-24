/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KJMACBOOK
 *
 * Created on June 21, 2016, 2:47 PM
 */\

#include <iostream>
#include <fstream>//file stream
#include <cstdlib>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include "Inventory.h"// Inventory class definition
using namespace std;

/*
 * 
 */

void outputLine (const string &, int, double);//prototype

int main() 
{   
    //variable declarations
    char name[25];
    int qty;
    double perUnit;
    
    //create inventory object
    Inventory i; 
    
    //create inventory vector
    vector<Inventory> inventory;
    
    //creates an ofstream object for the file InventoryData.txt
    fstream outInventory("InventoryData.txt", ios::in | ios::out | ios::binary);
    
    //In your main method, prompt the user to enter the data for 5 Inventory objects. 
    //Each object should have a name, quantity, and perUnit.
    cout << "\nPlease enter the data for 5 Inventory objects. " << endl;
     //Use a FOR loop to do the inputs.
    for(int j = 0; j < 5; j++)
    {
        cout << "\nEnter a name: " << endl;
        cin >> name;
        i.setName(name);
        
        cout << "\nEnter the quantity: " << endl;
        cin >> qty;
        i.setQty(qty);
        
        cout << "\nEnter a price: " << endl;
        cin >> perUnit;
        i.setPerUnit(perUnit);
        
        //After you get the values for one object, add the object to a Vector of type Inventory. 
        inventory.push_back(Inventory(name, qty, perUnit));
    }//end for loop
    
    //In a new FOR EACH loop, write the contents of the Vector into a file called “InventoryData.txt”. 
    for(auto a : inventory)//consider replacing auto foe Inventory
    {
        //You should be using the getters in your class to get at the data.
        outInventory.write(reinterpret_cast<const char *> (&i), sizeof(Inventory));
        //Close() the file object and verify that the file was created.
        outInventory.close();
    }//end while
    
    //Open the file for reading now.
    ifstream inInventory("InventoryData.txt", ios::in);//ifstream constructor opens the file
    
    //Read the data from the file using a WHILE loop and into your 3 temporary variables (see line 32, page 606). 
    inInventory.read(reinterpret_cast<char *>(&i), sizeof(Inventory));//read first record from file
    
    //display each record in file
    while(inInventory >> name >> qty >> perUnit)
    {
        //Inside the WHILE loop, use the getters to put the temporary variables into your Inventory object.
        //DO NOT USE THE VECTOR ANYMORE!
        //Basically, your inputs are now coming in from the file instead of the keyboard/user.
        outputLine(i.getName(), i.getQty(), i.getPerUnit());
        
        //Add one more line inside the WHILE loop to display the contents of the object to the screen.
        //Use a method in your Inventory class and try to use some of the formatting we learned in Chapter 13.
        i.displayInventory();
        
        //Be sure to Close() the file here as well.
        inInventory.close();
    }//end of while
    
    system("pause");
    return 0;
}//end main














