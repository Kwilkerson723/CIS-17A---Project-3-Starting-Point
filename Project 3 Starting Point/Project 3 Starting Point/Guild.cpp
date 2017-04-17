#include "Guild.h"
#include <algorithm>
Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}
void Guild::AddAdventurer(std::shared_ptr<Adventurer> newAdventurer)
{
	
	_adventurers.push_back(newAdventurer);
}
//add adventurer then pick class?
void Guild::AddMage(std::string name)
{
	auto magePtr = std::make_shared<Mage>(name);
	_adventurers.push_back(magePtr);
}

void Guild::AddPaladin(std::string name)
{
	auto paladin = std::make_shared<Paladin>(name);
	_adventurers.push_back(paladin);
}

void Guild::AddRanger(std::string name)
{
	auto ranger = std::make_shared<Ranger>(name);
	_adventurers.push_back(ranger);
}

void Guild::AddWarrior(std::string name)
{
	auto warrior = std::make_shared<Warrior>(name);
	_adventurers.push_back(warrior);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	
	int i = 0;
	int warriorsCount = 0;
	int mageCount = 0;
	int paladinCount = 0;
	int rangerCount = 0;
	
	int size = _adventurers.size();


	//output += _adventurers.data()		> 0 ? std::to_string(_adventurers.size()) + " mages\n" : "No mages!\n";  //how to sort the mageptr from the others
	//output += _ranger.size()	> 0 ? std::to_string(_adventurers.size()) + " rangers\n" : "No rangers!\n";			//need to figure out a sort function for _adventurers
	//output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";    //later
	//output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";
	return output;
}


//simplify this   //still need to figure this out 4/17/2017
/*std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	if (_mages.size() > 0) {
		for (auto mage : _mages) {
			output += mage->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_paladins.size() > 0) {
		for (auto paladin : _paladins) {
			output += paladin->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	if (_rangers.size() > 0) {
		for (auto ranger : _rangers) {
			output += ranger->Attack() + "\n";
		}
	}
	return output;
}

std::string Guild::AttackWithWarriors()
{
	std::string output = "You command your warriors to attack! \n";
	if (_warriors.size() > 0) {
		for (auto warrior : _warriors) {
			output += warrior->Attack() + "\n";
		}
	}
	return output;
}*/
//
std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	for (auto adventurer : _adventurers){
	output += adventurer->attack() + "\n";
		}
	return output;
	/*output += AttackWithMages();
	output += AttackWithPaladins();			//restore this later
	output += AttackWithRangers();
	output += AttackWithWarriors();*/
	return output;
	
	
}
