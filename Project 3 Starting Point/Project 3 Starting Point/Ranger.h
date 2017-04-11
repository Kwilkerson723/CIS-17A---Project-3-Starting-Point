#pragma once
#include <string>
#include "Adventurer.h"
class Ranger : public Adventurer
{
private:
	std::string _name;
public:
	Ranger(std::string name);
	~Ranger();

	std::string GetName() const { return _name; }
	std::string Attack() { return _name + " shoots arrows at his enemies!  PEW PEW PEW"; }
};

