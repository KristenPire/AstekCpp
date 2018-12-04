#ifndef DROID
#define DROID

#include <iostream>
#include <string>


class Droid{
private:
	std::string _serial;
	size_t _Energy;
	const size_t _Attack;
	const size_t _Toughness;
	std::string * _Status;

public:
	Droid(std::string serial = "",size_t Energy = 50, size_t Attack = 25, size_t Toughness = 15,std::string Status = "Standing by");
	Droid(const Droid& A);
	~Droid();
	const std::string getId();
	const int getSerial();
	const size_t getEnergy();
	const size_t getAttack();
	const size_t getToughness();
	const std::string getStatus();
	void setID(std::string);
	void setStatus(std::string Status);
	void setEnergy(size_t Energy);
	bool operator==(const Droid& A);
	bool operator!=(const Droid& A);
	void operator<<(size_t E);
	std::ostream& operator<<(std::ostream& a, Droid& D);

};

#endif