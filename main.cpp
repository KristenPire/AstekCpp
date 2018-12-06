
#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"


int main(){
	Character c("poney", 42);
	Warrior w("thor" , 42, "hammer");
	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;
	w.RangeAttack();
	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;
	w.CloseAttack();
	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;

	w.TakeDamage(50);

	c.TakeDamage(50);
	c.TakeDamage(50);
	c.TakeDamage(50);


	return 0;
}