#pragma once
#include <string>
using namespace std;

class Character
{
private:
	int _health = 0;
	string _name;
public:
	Character(string name, int startingHealth);
	~Character();

	string getName() { return _name; }
	int getHealth() { return _health; }

	string Attack();

};

