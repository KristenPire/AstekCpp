#ifndef DROID_HH
#define DROID_HH

#include<string>

class Droid
{
public:
	Droid(const std::string &name="", const std::string status = "Standing by");
	Droid(const Droid&);
	~Droid();
	Droid &operator=(const Droid&);
	bool operator==(const Droid&);
	bool operator!=(const Droid&);
	Droid &operator<<(std::size_t &reload);

	void set_energy(std::size_t new_energy);
	void set_status(std::string *new_status);
	void set_id(std::string new_ID);

	std::size_t get_attack();
	std::size_t get_toughness();
	std::string get_serial();
	std::string *get_status();
	std::string get_energy();


private:
	std::string _ID;
	std::size_t _Energy;
	const std::size_t _Attack, _Toughness;
	std::string *_Status;
};

std::ostream &operator<<(std::ostream &out, const Droid&);


#endif