#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

#include <string>

class Peon 
: public Victim
{
public:
	Peon(const std::string &name);
	~Peon();
	void getPolymorphed()const;

};


#endif