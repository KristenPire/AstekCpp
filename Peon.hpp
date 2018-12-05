#ifndef PEON
#define PEON
#include "Victim.hpp"

class Peon:public Victim
{
public:
	Peon(std::string name);
	~Peon();
	virtual void getPolymorphed() const;
	
};


#endif