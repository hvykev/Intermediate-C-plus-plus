// DoubleSubscriptedArrayTest.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "DoubleSub.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;


int main()
{
	int s;

	DoubleSub test= DoubleSub(5,5); // instance of class
	test(1,2) =8; // set row 1 column 2 to 8

	test(4,4) = 7; // set row 4 column 4 to 7
	cout << test; //display my entire array
	cin >> s; // pause variable
	return 0;
}

