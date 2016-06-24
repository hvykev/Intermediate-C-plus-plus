/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KJMACBOOK
 *
 * Created on May 24, 2016, 11:59 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <stdexcept>
using namespace std;

/*
 * Lab 1 of SE210
 */
//In the main method, create a 2D integer array, 2x2,
const size_t rows = 2;
const size_t columns = 2;
void printArray( const array< array< int, columns >, rows> &);
int input = 0;

void outputVector(const vector < int > &);//display the vector
void inputVector (vector < int > &);//input values into the vector

void courseAverage(int *, int *nPtr);//function prototype

int main() 
{
    //variables declared and initialized here
    array< array< int, columns >, rows> array1 = {};
    array< array< int, columns >, rows> array2 = {};
    
    //Create a new integer vector with no size.
    vector <int> integers1;//vector stores value of type <int>
    
    //Create 5 integer counter variables to store the count of A, B, C, D, and F grades.
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    
    //initializing 4 user inputs using a counter-controlled loop
    int count = 0;
    while(count < 4)
    {
        // prompt the user to enter the 4 grade values (using nested loops)
        cout << "Please enter 4 individual grade values: ";
        cin >> input;

        //if...else nested in a for loop.
        //Do a range check on the values and only accept them if they are between 1 and 100.
        //If the value is outside the range, report to the user that the value is either... 
        //too low or too high and ask them to re-enter it.
        for (int i = 0; 1 < 4; i++)
        {
            if (input < 1)
                cout << "The value is too low, please try again... \n";
            else 
                if (input > 100)
                cout << "The value is too high, please try again... \n";
            else
                cout << "Thank you!\n" << endl;          
        }//end for loop.
    }//end while loop.
   
    //Use a Range-Based FOR loop to output the values of the array and, at the same time, 
    //add them to the vector. 
    for (auto const &row : a)//loop through array's rows.
    {
        for (auto const &element : row)//loop through array's columns.
            cout << element << ' ' << endl;
        integers1.push_back(integers1(rows, columns));
        cout << endl;
    }//end of Range-Based FOR loop.
    
    //After the loop, display the size of the vector to make sure it is indeed 4.    
    cout << "The size of the vector is: \n" << integers1.size() << endl;
    outputVector (integers1);
    
    //Use a new Range-Based FOR Loop on the vector and inside the loop, use a SWITCH statement... 
    //to add how many A, B, C, D, and F grades there are in the 4 values.
    while((input = cin.get()) != EOF)
    {
        //determine which grade(input) was entered.
        switch (input)// switch statement nested in a while statement
        {
            case 'A'://uppercase input
            case 'a'://lowercase input
                ++aCount;//increment aCount
                break;//necessary to exit switch
                
            case 'B'://uppercase input
            case 'b'://lowercase input
                ++bCount;//increment bCount
                break;//necessary to exit switch
                
            case 'C'://uppercase input
            case 'c'://lowercase input
                ++cCount;//increment cCount
                break;//necessary to exit switch
                
            case 'D'://uppercase input
            case 'd'://lowercase input
                ++dCount;//increment dCount
                break;//necessary to exit switch
            
            case 'F'://uppercase input
            case 'f'://lowercase input
                ++fCount;//increment fCount
                break;//necessary to exit switch
                
            case '\n'://ignore newlines
            case '\t'://tabs
            case ' '://space in input
                break;//exit switch    
                
            default://catch all other characters
                cout << "Incorrect letter grade entered."
                     << "Enter a new grade." << endl;
                break;//optional; will exit switch anyway
        }//end switch
    }//end while
    
    //After the loop, display the results of the counters
    cout << "\n\nNumber of students who received each letter grade: "
         << "\nA: " << aCount//display number of A grades   
         << "\nB: " << bCount//display number of B grades
         << "\nC: " << cCount//display number of C grades
         << "\nD: " << dCount//display number of D grades
         << "\nF: " << fCount//display number of F grades
         << endl;   
    
    system("pause");
    return 0;
}//end main


//Create a new function called courseAverage (make sure to include the prototype of it before the main method!)...
//The function should not return anything. It will, however, take in 2 parameters...
//The first will be a POINTER to an integer...
//The second, an integer indicating the total number of elements the pointer needs to access.
/*void courseAverage(int *, int *nPtr);
{        
    //Inside the function, use the pointer to loop through the values in memory and add them up...
    //(storing the total in a new variable). Then divide this by the total number of elements...
    //(the value of the 2nd parameter) to get the average. Display the average.
    
    
}//end function courseAverage

*/












