
#include "Mage.hpp"
#ifndef PRIEST
#define PRIEST

class Priest : public Mage{
	private:		
		Priest(const Priest &) = delete;
	
	public:
		Priest(const std::string &name ,int level);
		virtual ~Priest() = default;
		
		virtual int CloseAttack();
		virtual void Heal();
		
};

#endif
