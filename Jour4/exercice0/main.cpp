#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"
#include "Hunter.hpp"

#include <iostream>

int main(){
	
	Hunter c("Bob", 76, "Dagger");
	
	c.TakeDamage(80);
	c.CloseAttack();
	//std::cout << a << std::endl;
	c.RangeAttack();

	c._currentRange = Character::RANGE;
	c.RestorePower();
	c.CloseAttack();
	c.RangeAttack();
	//std::cout << a << std::endl;
	
	//c.Intercept();
	c.RangeAttack();
	c.CloseAttack();
	
	
	c.RestorePower();
	c.Heal();
	
	
	c.TakeDamage(15);
	c.TakeDamage(30);
	c.TakeDamage(60);
	
	return 0;
}