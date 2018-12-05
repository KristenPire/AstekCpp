#include "Peon.cpp"

class Sorcerer{
	private:
		const std::string name;
		const std::string title;

	public:
		Sorcerer(std::string name_, std::string title_);
		~Sorcerer();
		std::string getName();
		std::string getTitle();
		
		void polymorph(const Victim &victim)const;
};
