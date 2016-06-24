//#include "stdafx.h"
#include "DoubleSub.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;


DoubleSub::DoubleSub(int arrayRows, int arrayColumns) // constructer that takes in the number of rows and columns
{
	rowz = arrayRows; // sets the number of rows to global row variable
	columnz = arrayColumns; // sets the number of columns to global column vairable
	int arraySize = arrayRows * arrayColumns; // sets the array size
	if (arraySize>0)
	{
		size = arraySize;
		ptr = new int[size]; // makes a new array with size of array sent in
	}
	else
	{
		throw invalid_argument("array size must be greater than 0"); // throw
	}

	for (size_t i =0; i<size; ++i) // for loop to set all array values to 0
	{
		ptr[i]=0;
	}
	
		

}


DoubleSub::~DoubleSub(void)
{
	delete [] ptr; // deletes array pointer
}

int &DoubleSub::operator() (int row, int column) // overloaded () operator to return proper array index based on values sent in using parenthises
{
	int z;
	if((row <0 || column<0) || (row>rowz || column> columnz)) // check to make sure inputs are in scope of array
	{
		throw invalid_argument("invalid input");
	}
	
	z= (row*columnz + column); // math to get to proper section of my 1d array

	return ptr[z];
}
int DoubleSub::operator() (int row,int column) const // secon overloaded () operator
{
	int z;
	if((row <0 || column<0) || (row>rowz || column> columnz))
	{
		throw invalid_argument("invalid input");
	}
	
	z= (row*columnz + column);

	

	return ptr[z];
}


ostream &operator<<(ostream &output, const DoubleSub &a) // overloaded cout << operator so that if i tell it to output my 2d array it will show it in a pretty way
{
	for (size_t i = 0; i<a.size; ++i) // for loop that loops baised on the size of array
	{
		output << setw(4) <<a.ptr[i];
		if ((i+1) % a.columnz == 0)
		{
			output << endl;
		}
	}
		if (a.size % a.columnz !=0)
		{
			output <<endl;
		}

		
	return output;
}