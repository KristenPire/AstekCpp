#ifndef VICTIM
#define VICTIM
#include <iostream>
#include <string>

class Victim
{

protected:
	const std::string _name;

public:
	Victim(std::string name);
	~Victim();
	const std::string GetName() const;
	virtual void getPolymorphed() const;
	
};


std::ostream& operator<<(std::ostream& a, Victim& V);

#endif