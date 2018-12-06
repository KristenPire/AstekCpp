#ifndef PRIEST_HH
#define PRIEST_HH

#include "Mage.hh"

class Priest : public Mage{
	public:
		Priest(const std::string & name = "Iopi", int level = 40);
		virtual ~Priest();

		int CloseAttack();
		void Heal();
};

#endif