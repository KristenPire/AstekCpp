#ifndef CHARCTER
#define CHARCTER
#include "Character.hpp"
#endif
#include "Warrior.hpp"


int main(){
	
	Character kreog("Kreog", 1);
	Warrior thor("Thor", 42, "Axe");
	kreog.displayStats();
	std::cout << "-------------------------------------------------"<< std::endl;
	thor.displayStats();
	
	thor.TakeDamage(50);
	int a = thor.CloseAttack();
	std::cout << a << std::endl;
	a = thor.RangeAttack();
	
	thor.Range = Character::RANGE;
	a = thor.CloseAttack();
	a = thor.RangeAttack();
	std::cout << a << std::endl;
	
	a = thor.CloseAttack();
	a = thor.RangeAttack();
	
	thor.Heal();
	thor.TakeDamage(50);
	thor.TakeDamage(100);
	thor.TakeDamage(100);
	
	thor.displayStats();
	
	return 0;
}
