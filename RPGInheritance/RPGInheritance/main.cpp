#pragma once
#include "Warrior.h"
#include "Archer.h"
#include <iostream>
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attack(Character theCharacter);

int main()
{
	auto bob = Character("bob", 100);
	DisplayCharacterInfo(bob);

	system("pause");

	auto mike = Warrior("mike", 150, "longsword");
	DisplayCharacterInfo(mike);

	system("pause");

	auto legolas = Archer("legolas", 100, "cool elven bow");
	DisplayCharacterInfo(legolas);

	system("pause");

	system("cls");
	Attack(bob);
	Attack(mike);
	Attack(legolas);
	system("pause");
	return 0;
}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}

void Attack(Character theCharacter)
{
	cout << theCharacter.Attack();
}