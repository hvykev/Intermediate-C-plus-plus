
//#include "stdafx.h"
#include "Creature.h" //Creature class definition
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <random>
#include <array>
using namespace std;

//constructor uses member initializer list to pass initializer values to constructors of member objects
//Create a Creature class that has a Name, 4 integer variables: Health (10 – 30), Attack (10 – 20),...
//and Defense (10 – 20), Regen (5 – 15), and 2 Boolean variables: isDodging and isHealing
Creature::Creature(const string name, int h, int a, int d, int r, bool isdodging, bool ishealing, 
	const array<string, fName> &firstNameArray, const array<string, lName> &lastNameArray)
	: Name(name),//initialize Name
	Health(h),//initialize Health
	Attack(a),//initialize Attack
	Defense(d),//initialize Defense
	Regen(r),//initialize Regen
	isDodging(isdodging),//initialize isDodging
	isHealing(ishealing),//initialize isHealing
        //Include 2 string arrays, one with some First Name values and one with some Last Name values. Be creative!
	firstName(firstNameArray),
	lastName(lastNameArray)
{
	cout << Name << ' ' << endl;
}//end Creature constructor

//setters and getters
// include all the common methods and include the handling of errors in your Setters (using Throws)
//function to set a name 
void Creature::setName(const string &name)
{
	Name = name;
}

//function to retrieve a Name
string Creature::getName()const
{
	return Name;
}

void Creature::setCreature(int h, int a, int d, int r)//function that sets Name
{

	//validate health, attack, defense, and regen
	if ((h >= 10 && h <= 30) && (a >= 10 && a <= 20) && (d >= 10 && d <= 20) && (r >= 5 && r <= 15))
	{
            Health = h;
            Attack = a;
            Defense = d;
            Regen = r;
	}//end if
	else
	{
            throw invalid_argument("health, attack, defense and/or regen are out of range: ");
	}//end else
}//end setCreature method
 
void Creature::setisDodging()
{

}

//A Punch method that takes a reference to another Creature object (rvalue) and subtracts rvalue's health by the formula:
//Health = Health - (this Attack) + Defense, if rvalue isn't dodging, else the punch is ignored. 
//Also, make sure that the punch doesn't add to Health.
int Creature::punch()const
{
	
}

//Include a dodge method that will allow a Creature to dodge the next punch (see punch)
int Creature::dodge()const
{

}

//Include a regen method that will allow a Creature to gain back lost health using the formula: Health = Health + Regen
int Creature::regen()const
{
    
}


//destructor
Creature::~Creature()
{
}//end Creature destructor
