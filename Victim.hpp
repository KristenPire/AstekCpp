#include <string>
#include <iostream>

class Victim{
	protected:
		std::string name;

	public:
		Victim(std::string name_);
		~Victim();
		friend std::ostream& operator<<(std::ostream& os, Victim& v);
		
		virtual void getPolymorphed()const;
};

