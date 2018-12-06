#ifndef CHARCTER
#define CHARCTER
#include "Character.hpp"
#endif
#include "Warrior.hpp"
#ifndef MAGE
#define MAGE
#include "Mage.hpp"
#endif
#include "Priest.hpp"


int main(){
	
	//~ Character kreog("Kreog", 1);
	//~ Warrior thor("Thor", 42, "Axe");
	//~ kreog.displayStats();
	//~ std::cout << "-------------------------------------------------"<< std::endl;
	//~ thor.displayStats();
	
	Priest c("Marcel II", 76);
	c.displayStats();
	c.TakeDamage(80);
	int a = c.CloseAttack();
	std::cout << a << std::endl;
	a = c.RangeAttack();

	a = c.CloseAttack();
	a = c.RangeAttack();
	std::cout << a << std::endl;
	
	c.Range = Character::CLOSE;
	a = c.RangeAttack();
	a = c.CloseAttack();
	c.displayStats();
	
	
	c.Heal();
	c.displayStats();
	
	c.TakeDamage(50);
	c.TakeDamage(100);
	c.TakeDamage(100);
	
	c.RestorePower();
	
	c.displayStats();
	
	return 0;
}
