#ifndef DROID_HH
#define DROID_HH

#include<string>

class Droid
{
public:
	Droid(const std::string &name="");
	Droid(const Droid&);
	~Droid();

	void status();

private:
	const std::string _ID;
	std::size_t _Energy;
	const std::size_t _Attack, _Toughness;
	std::string *_Status


};


#endif