#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include <string>


class Sorcerer
{
private:
	std::string _name;
	std::string _title;



public:
	Sorcerer(const std::string &name, const std::string &title);
	~Sorcerer();

	std::string get_name();
	std::string get_title();

	void polymorph(const Victim &victim)const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer&);


#endif