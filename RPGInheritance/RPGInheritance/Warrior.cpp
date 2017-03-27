#include "Warrior.h"



Warrior::Warrior(string name, int startingHealth, string swordType) : 
	Character(name,startingHealth), _swordType(swordType)
{
}


Warrior::~Warrior()
{
}

string Warrior::Taunt()
{
	return "Hey badguys attack me!";
}
