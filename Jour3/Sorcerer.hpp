#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include <string>
#include <ostream>


class Sorcerer
{
private:
	std::string _name;
	std::string _title;



public:
	Sorcerer(const std::string &name, const std::string &title);
	~Sorcerer();

	const std::string &get_name()const;
	const std::string &get_title()const;

	void polymorph(const Victim &victim)const;
};


std::ostream &operator<<(std::ostream &out, const Sorcerer& mage);



#endif