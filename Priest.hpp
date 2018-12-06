#ifndef MAGE
#define MAGE
#include "Mage.hpp"
#endif

class Priest : public Mage{
	private:		
		Priest(const Priest &) = delete;
	
	public:
		Priest(const std::string &name ,int level);
		//Displays mage's words too
		virtual ~Priest() = default;
		
		virtual int CloseAttack();
		virtual void Heal();
		
};
