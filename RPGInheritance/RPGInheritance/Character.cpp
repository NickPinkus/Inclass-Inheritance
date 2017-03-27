#include "Character.h"



Character::Character(string name, int startingHealth) : _name(name), _health(startingHealth)
{
}


Character::~Character()
{
}

string Character::Attack()
{
	return _name + " attacks!\n";
}
