#ifndef SORCERER
#define SORCERER 

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
	ostream& operator<<(ostream& a,Sorcerer& S);
};

#endif