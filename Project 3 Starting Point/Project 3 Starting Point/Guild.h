#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Adventurer.h"

class Guild
{
private:
	std::vector<std::shared_ptr<Adventurer>> _adventurers;

	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddAdventurer(std::shared_ptr<Adventurer> newAdventurer);
	void AddMage(std::string name);
	void AddPaladin(std::string name);
	void AddRanger(std::string name);
	void AddWarrior(std::string name);

	std::string GetInfo();

	std::string AttackWithMages();
	std::string AttackWithPaladins();
	std::string AttackWithRangers();
	std::string AttackWithWarriors();
	std::string AttackWithAllAdventurers();
};

