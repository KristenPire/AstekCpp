#ifndef DROID_HH
#define DROID_HH

#include <iostream>
#include <string>
#include <fstream>

class Droid{
	public:
		Droid(std::string serial = "");
		Droid(const Droid& droid);
		~Droid();

		std::string getSerial() const;
		size_t getEnergy() const;
		size_t getAttack() const;
		size_t getToughness() const;
		std::string getStatus() const;

		void setFeature(std::string serial);
		void setFeature(size_t energy);
		void setFeature(std::string* status);

		bool operator==(Droid const &droid) const;
		void operator=(Droid const &droid);
		bool operator!=(Droid const &droid) const;
		void operator<<(size_t& energy);

	private:
		std::string _serial;
		size_t _energy;
		const size_t _attack;
		const size_t _toughness;
		std::string* _status;
};

std::ostream& operator<<(std::ostream& os, const Droid& droid);

#endif