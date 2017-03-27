#pragma once
#include "Character.h"
class Archer : public Character
{
private:
	string _bowType;
public:
	Archer(string name, int startingHealth, string bowType);
	~Archer();
};

