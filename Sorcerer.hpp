#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"


class Sorcerer{
public:
Sorcerer(std::string name, std::string title);
~Sorcerer();
std::string getName()const;
std::string getTitle()const;
void polymorph (const Victim &victim) const;


private:
std::string name;
std::string title;
};

std::ostream& operator<<(std::ostream & stream, const Sorcerer & s);

#endif