#ifndef DROID_HH
#define DROID_HH

#include<string>

class Droid
{
public:
	Droid(std::string &name="");
	Droid(const Droid&);
	~Droid();

	void set_energy(std::size_t new_energy);
	void set_status(std::string *new_status);

	const std::size_t get_attack();
	const std::size_t get_toughness();
	std::string get_serial();
	std::string *get_status();


private:
	std::string _ID;
	std::size_t _Energy;
	const std::size_t _Attack, _Toughness;
	std::string *_Status


};


#endif