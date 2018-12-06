#include "Character.hpp"


int main(){
	Character c("Bob-Théodule", 7);
	c.TakeDamage(50);
	int a = c.CloseAttack();
	std::cout << a << std::endl;
	a = c.RangeAttack();
	
	c.Range = Character::RANGE;
	a = c.CloseAttack();
	a = c.RangeAttack();
	std::cout << a << std::endl;
	
	c.Range = Character::CLOSE;
	a = c.CloseAttack();
	a = c.RangeAttack();
	
	c.Heal();
	c.TakeDamage(50);
	c.TakeDamage(100);
	c.TakeDamage(100);
	return 0;
}
