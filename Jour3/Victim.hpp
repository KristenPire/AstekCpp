#ifndef VICTIM_HPP
#define VICTIM_HPP

#include<string>

class Victim
{
private:
	std::string _name;

public:
	Victim(const std::string &name);
	~Victim();

	std::string get_name()const;

	void getPolymorphed()const;
};


std::ostream &operator<<(std::ostream &out, Victim&);


#endif