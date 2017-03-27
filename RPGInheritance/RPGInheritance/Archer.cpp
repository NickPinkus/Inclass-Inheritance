#include "Archer.h"



Archer::Archer(string name, int startingHealth, string bowType) :
	Character(name, startingHealth), _bowType(bowType)
{
}


Archer::~Archer()
{
}
