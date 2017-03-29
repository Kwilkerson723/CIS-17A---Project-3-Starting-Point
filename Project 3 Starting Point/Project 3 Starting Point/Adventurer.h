#pragma once
#include <string>
#include <vector>
class Adventurer
{
private:
	std::string _name;
	
public:
	
	
	Adventurer(std::string name);
	~Adventurer();

	std::string getName() const { return _name };
	std::string virtual attack() {return _name + "Punches!";}

	//virtual means that derived classes can over ride it


};

