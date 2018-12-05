#ifndef VICTIM_HH
#define VICTIM_HH

#include <iostream>
#include <string>

class Victim{
	public:
		Victim(std::string name = "Darius");
		~Victim();

		std::string getName() const;

	private:
		const std::string _name;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);

#endif