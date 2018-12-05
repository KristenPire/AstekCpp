#ifndef SORCERER
#define SORCERER 
#include "Victim.hpp"

#include <iostream>
#include <string>

class Sorcerer
{

private:
	const std::string _name;
	const std::string _title;

public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	const std::string GetName() const;
	const std::string GetTitle() const;
	void polymorph(const Victim& V) const;
};



std::ostream& operator<<(std::ostream& a,Sorcerer& S);

#endif