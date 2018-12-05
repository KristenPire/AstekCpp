#include <iostream>
#include <string>


class Victim{
public:
	Victim(std::string name);
	~Victim();
	std::string getName()const;
	void getPolymorphed()const;

private:
	std::string name;
};

std::ostream& operator<<(std::ostream & stream, const Victim & v);