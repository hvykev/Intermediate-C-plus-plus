#ifndef CREATURE_H
#define CREATURE_H

#pragma 
#include <string>
#include <array>
#include <random>
using namespace std;

class Creature
{
public:
	//2 string arrays, one with First Name values and another with some Last Name values.
	static const size_t fName = 5;
	static const size_t lName = 5;

	//full constructor
	Creature(const std::string, int, int, int, int, bool, bool, 
		const std::array<string, fName>, const std::array<string, lName>);

	void setCreature(int, int, int, int);//set health, attack, defense, and regen
	int getCreature()const;

	void setName(const std::string &);//setName
	std::string getName()const;//getName

	void setHealth();//setHealth
	int getHealth()const;//getHealth

	void setAttack();//setAttack
	int getAttack()const;//getAttack

	void setDefense();//setDefense
	int getDefense()const;//getDefense

	void setRegen();//setRegen
	int getRegen()const;//getRegen

	void setisDodging();//setisDodging
	bool getisDodging()const;//getisDodging

	void setisHealing();//setisHealing
	bool getisHealing()const;//getisHealing

	//other methods
	void print()const;

	//A Punch method that takes a reference to another Creature object (rvalue) and subtracts rvalue's... 
        //health by the formula:...
	//Health = Health - (this Attack) + Defense, if rvalue isn't dodging, else the punch is ignored. 
	//Also, make sure that the punch doesn't add to Health.
	int punch()const;

	//Dodge method allows Creature to "see" the next punch
	int dodge()const;

	//destructor
	~Creature();

private:
	//variables
	string Name;
	int Health;
	int Attack;
	int Defense;
	int Regen;
	bool isDodging;
	bool isHealing;

	//array of Creature alias'
	std::array <string, fName> firstName;//array of first names
	std::array <string, lName> lastName;//array of last names

};//end class Creature

#endif
