#include <string>
#include <iostream>
#include "Peon.cpp"

class Sorcerer{
	private:
		std::string name;
		std::string title;

	public:
		Sorcerer(std::string name_, std::string title_);
		~Sorcerer();
		friend std::ostream& operator<<(std::ostream& os, Sorcerer &s);
		
		void polymorph(const Victim &victim)const;
};
