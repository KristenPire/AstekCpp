#include <string>
#include <iostream>

class Victim{
	protected:
		const std::string name;

	public:
		Victim(std::string name_);
		~Victim();
		std::string getName();
		
		virtual void getPolymorphed()const;
};

