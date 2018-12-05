#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <ostream>

class Victim
{
protected:
	std::string _name;

public:
	Victim(const std::string &name);
	~Victim();

	const std::string &get_name()const;

	virtual void getPolymorphed()const;
};


std::ostream &operator<<(std::ostream &out, const Victim& victim);



#endif