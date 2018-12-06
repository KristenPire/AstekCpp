
#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"
#include "Hunter.hpp"

int main(){
	
	//~ Character kreog("Kreog", 1);
	//~ Warrior thor("Thor", 42, "Axe");
	//~ kreog.displayStats();
	//~ std::cout << "-------------------------------------------------"<< std::endl;
	//~ thor.displayStats();
	
	Hunter c("The hunter", 53);
	c.displayStats();
	c.TakeDamage(80);
	int a = c.CloseAttack();
	std::cout << a << std::endl;
	a = c.RangeAttack();

	c.Range = Character::RANGE;
	a = c.CloseAttack();
	a = c.RangeAttack();
	std::cout << a << std::endl;

	
	c.RestorePower();
	c.Heal();
	c.displayStats();
	
	c.TakeDamage(50);
	c.TakeDamage(100);
	c.TakeDamage(100);
	
	return 0;
}
