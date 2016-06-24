
#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	//create derived class objects
	TwoDayPackage tdp("Johnson", "456", "Tacoma", "Washington", "98405",
		"McGruff", "123", "Chicago", "Illinois", "60652",
		2.0, 1.5, 2.0);

	OvernightPackage onp("Johnson", "456", "Tacoma", "Washington", "98405",
		"McGruff", "123", "Chicago", "Illinois", "60652",
		2.0, 1.5, 12.70);
	
	//instantiate package object
	Package p("Johnson", "456", "Tacoma", "Washington", "98405", 
			  "McGruff", "123", "Chicago", "Illinois", "60652",	
			  2.0, 1.5 );

                //display the package information    
		cout << "\nSender information: \n" << endl;
		p.print();
                
		//calculate package total cost
		cout << "\n\nThe total cost is: $" << p.calculateCost() << endl;
		tdp.print();
		cout<<"\n2 day shipping cost: " << tdp.calculateCost()<<endl;
		onp.print();
		cout<<"\nOvernight shipping cost: " << onp.calculateCost()<<endl;

	system("pause");
	return 0;
}//end main