/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KJMACBOOK
 *
 * Created on June 16, 2016, 3:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * Exercises 13.6
 */
int main() 
{
    //declarations
    int x = 40000;
    int y = 100;
    double z = 1.234;
    char charArray[10];
    
    //print integer 40000 left justified in a 15-digit field.
    cout << "\n***************************\n"
         << " Print 40000, left justified: \n"
         << "\n***************************" << endl 
        << left << setw(15) << x << "\n" << endl;
    
    //Read a string into character array variable state.
    string temp = "";
    char buffer[20];//create array of 10 characters
    //use function read to input characters into buffer
    cout << "\n*****************************\n"
         << " Enter a string: " 
         << "\n*****************************" << endl;
    cin >> buffer;
    //use cin to input characters into buffer
    cout << "\n*****************************\n"
         << " The string entered is: " 
         << "\n******************************" <<endl << buffer << "\n" <<endl;
            
    //Print 200 with and without a sign.
    cout << "\n*************************************\n"
         << " Print 200 with and without the (+): " 
         << "\n*************************************" << endl;
    cout << internal << showpos << setw(0) << 200 << endl;
    cout << internal << noshowpos << setw(4) << "200\n" <<  endl;
    
    //Print the decimal value 100 in hexadecimal form preceded by 0x.
    cout << "\n*****************************\n"
         << " 100 in hex, preceded by 0x: " 
         << "\n*****************************" << endl
         << showbase;
    cout << hex << y << "\n" << endl;
    
    //Read characters into array charArray until the character 'p' is 
    //encountered, up to a limit of 10 characters (including the terminating null character). 
    //Extract the delimiter from the input stream, and discard it.
    cout << "\nRead the characters into charArray, until 'p'... \n" << endl;
	cin.getline(charArray, 10, 'p' );
	cout << charArray << endl;
    
  
    //Print 1.234 in a 9-digit field with preceding zeros.
    cout << "\n***************************************************\n"
            << " Print 1.234 in a 9-digit field, preceded by zeros: " 
            << "\n**************************************************" << endl
            << showpoint << setprecision(9) << z << "\n" << endl;
   
    /*
     * 13.10, and 13.17
     */
    
    //Write a program that prints the value 100.453627 rounded to the nearest,
    //digit, tenth, hundredth, thousandth and ten-thousandth.
    int places;
    double value = 100.453627;
    
    cout << "\n********************************************************************************************\n"
            << " A given value rounded to nearest digit, tenth, hundredth, thousandth and ten-thousandth: " 
            << "\n*****************************************************************************************" << endl;
    
    cout << fixed;
    
    for(places = 0; places <= 6; ++places)
    {
        cout.precision(places);
        cout << value << endl;
    }//end for
            
    /*
     *Write a program that uses a for statement to print a table of ASCII values 
     *for the characters in the ASCII character set from 33 to 126. The program should
     *print the decimal value, octal value, hexadecimal value and character value
     *for each character.
     *Use the stream manipulators dec, oct and hex to print the integer values.
     */  
    int ascii;
    int values;
    
    cout << "\n***********************************************************************************************************************\n"
         << " Print ASCII characters from 33 to 126: "
         << " Print the decimal value, octal value, hexadecimal value & character value: "
         << "\n**************************************************************************************************************************" << endl
            << showbase;
    
    cout << "\nPrint ASCII values 33-126 in hex, octal & dec: \n" << endl;
	for (double j = 33; j <= 126; j++)
	{
		cout << j << "hex value is: " << hex
			 << j << endl;

		cout << dec << j << "octal value is: "
			 << oct << j << endl;

		cout << setbase(10) << j << "decimal value is: "
			 << j << endl;
	}//end for loop
  
    system("pause");
    return 0;
}

