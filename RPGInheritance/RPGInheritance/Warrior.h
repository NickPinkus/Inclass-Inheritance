#pragma once
#include "Character.h"
class Warrior : public Character
{
private:
	string _swordType;
public:
	Warrior(string name, int startingHealth, string swordType);
	~Warrior();

	string Taunt();

};

