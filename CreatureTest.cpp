/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KJMACBOOK
 *
 * Created on June 18, 2016, 8:08 PM
 */

#include <cstdlib>//contains function prototype for rand
#include <iostream>
#include <iomanip>
#include <array>
#include <string>

using namespace std;

/*
 * 
 */

int main() 
{
    const size_t arraySize = 5;//size of array fname
    const size_t arraySize = 5;//size of array lname
    array<string, arraySize> fname = { "red", "blue", "green", "stone", "gold" };
    array<string, arraySize> lname = { "slime", "poltergeist", "scorpion", "knight", "dragon" };
    
    //loop 2 times
    for (unsigned int counter = 1; counter <= 2; ++counter)
    {
        //choose and output 2 random names
        cout << setw(10) << (1 + rand() % 2) << endl;
    }//end for
  
    system("pause");
    return 0;
}//end main

