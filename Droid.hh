#ifndef DROID
#define DROID

#include <iostream>
#include <string>


class Droid{
private:
	const int _serial;
	size_t _Energy;
	const size_t _Attack;
	const size_t _Toughness;
	std::string * _Status;

public:
	Droid(int serial = "",size_t Energy = 50, size_t Attack = 25, size_t Toughness 15, std::string * Status = "Standing by");
	Droid(const Droid& A);
	~Droid();
	const void Id();
	const int getSerial();
	const size_t getEnergy();
	const size_t getAttack();
	const size_t getToughness();
	const string * getStatus();
	std::string * setStatus(std::string & Status);
	size_t setEnergy(size_t Energy);
	bool operator==(const Droid& A);
};

#endif