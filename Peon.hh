#ifndef PEON_HH
#define PEON_HH

#include "Victim.hh"

class Peon : public Victim{
	public:
		Peon(std::string name);
		~Peon();

		virtual void getPolymorphed() const;
};

#endif