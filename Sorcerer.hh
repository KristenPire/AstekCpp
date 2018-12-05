#ifndef SORCERER_HH
#define SORCERER_HH

#include <iostream>
#include <fstream>
#include <string>

class Sorcerer{
	public:
		Sorcerer(std::string name = "Ro/b/ert", std::string title = "the Magnificient");
		~Sorcerer();

		std::string getName() const;
		std::string getTitle() const;

	protected:
		std::string _name;
		std::string _title;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer);

#endif