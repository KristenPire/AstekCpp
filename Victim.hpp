#ifndef VICTIM
#define VICTIM
#include <iostream>
#include <string>

class Victim
{

private:
	const std::string _name;
public:
	Victim(std::string name);
	~Victim();
	const std::string GetName() const;
	
};


std::ostream& operator<<(std::ostream& a, Victim& V);

#endif