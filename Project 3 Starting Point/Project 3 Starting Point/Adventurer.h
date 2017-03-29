#pragma once
#include <string>
class Adventurer
{
private:
	std::string _name;

public:
	
	
	Adventurer(std::string name);
	~Adventurer();

	std::string getName() const { return _name };
	std::string virtual attack(); {return _name + "Punches with meaty fists!";}

	//virtual means that derived classes can over ride it


};

