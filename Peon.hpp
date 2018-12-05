#include <iostream>
#include <string>
#include "Victim.cpp"


class Peon : public Victim{
public:
	Peon(std::string name);
	~Peon();
	virtual void getPolymorphed()const;

private:


};