#include <string>
#include <iostream>

class Victim{
	private:
		std::string name;

	public:
		Victim(std::string name_);
		~Victim();
		friend std::ostream& operator<<(std::ostream& os, Victim& v);
};

