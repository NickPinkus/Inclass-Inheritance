#pragma once
#include "Warrior.h"
class Berserker : public Warrior
{
public:
	Berserker(string name, int startingHealth, string swordType);
	~Berserker();
};

