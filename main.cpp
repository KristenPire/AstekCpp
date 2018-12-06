#include "Paladin.hpp"


int main(){

	Paladin c("Palouf", "Orc","Axe",76);

	std::cout << c;
	c.TakeDamage(80);
	int a = c.CloseAttack();
	std::cout << a << std::endl;
	a = c.RangeAttack();

	c._range = Character::RANGE;
	a = c.CloseAttack();
	a = c.RangeAttack();
	std::cout << a << std::endl;
	
	a = c.RangeAttack();
	a = c.CloseAttack();
	std::cout << c;
	
	c.RestorePower();
	c.Heal();
	std::cout << c;
	
	c.TakeDamage(50);
	c.TakeDamage(100);
	c.TakeDamage(100);
	
return 0;
}