
#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

void virtualViaPointer(const Package * const);//prototype
void virtualViaReference(const Package &);//prototype

int main()
{
    //create base-class objects
    TwoDayPackage tdp("Johnson", "456", "Tacoma", "Washington", "98405",
            "McGruff", "123", "Chicago", "Illinois", "60652",
            2.0, 1.5, 2.0);

    //create base-class pointer
    TwoDayPackage *tdpPtr = nullptr;

    //create derived class objects
    OvernightPackage onp("Johnson", "456", "Tacoma", "Washington", "98405",
            "McGruff", "123", "Chicago", "Illinois", "60652",
            2.0, 1.5, 12.70);

    //create derived class pointer
    OvernightPackage *onpPtr = nullptr;

    //instantiate package object
    Package p("Johnson", "456", "Tacoma", "Washington", "98405", 
                      "McGruff", "123", "Chicago", "Illinois", "60652",	
                      2.0, 1.5 );

    //set floating point output formatting
    cout << fixed << setprecision(2);
    
    //display the package information using static binding   
    cout << "\nSender information: \n" << endl;
    p.print();

    //output objects using dynamic binding
    cout << "\n\n\nInvoking print function on base-class and "
         << "derived-class \nobjects with dynamic binding";
    
    //calculate package total cost
    cout << "\n\nThe total cost is: $" << p.calculateCost() << endl;
    p.print();
    
    tdpPtr = &tdp;//aim base-class pointer at base-class object and print
    cout<<"\n2 day shipping cost: " << tdp.calculateCost()<<endl;
    tdpPtr -> print();//invokes base-class print
    
    onpPtr = &onp;//aim derived-class pointer at derived-class object and print
    cout<<"\nOvernight shipping cost: " << onp.calculateCost()<<endl;
    onpPtr -> print();//invokes derived-class print
    
    //create a vector
    vector < Package * > packages(3);
    
    //initialize vector with pointers to packages
    packages[ 0 ] = &p;
    packages[ 0 ] = &tdp;
    packages[ 0 ] = &onp;
    
    cout << "Packages processed polymorphically via dynamic binding:\n\n";
    
    //call virtualViaPointer to print each Packages information 
    //and cost using dynamic binding
    for( const Package * packagesPtr : packages)
        virtualViaPointer(packagesPtr);
    
    //call virtualReference to print each Packages information 
    //and cost using dynamic binding
    cout << "Virtual function calls made off base-class references:\n\n";
    for( const Package * packagesPtr : packages)
        virtualViaReference(*packagesPtr);//note dereferencing
    
    system("pause");
    return 0;
}//end main

