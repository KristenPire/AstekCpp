
#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"


int main(){
	Character c("poney", 42);
	Warrior w("thor" , 42, "hammer");
	Priest p("Iopi",84);
	Mage m("Fluffy",40);

	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;
	w.RangeAttack();
	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;
	w.CloseAttack();
	std::cout<<w.getName() <<" power : "<<w.getPower()<<std::endl;

	std::cout<<p.getName() <<" power : "<<p.getPower()<<std::endl;
	p.RangeAttack();
	std::cout<<p.getName() <<" power : "<<p.getPower()<<std::endl;
	p.CloseAttack();
	std::cout<<p.getName() <<" power : "<<p.getPower()<<std::endl;

	std::cout<<m.getName() <<" power : "<<m.getPower()<<std::endl;
	m.RangeAttack();
	std::cout<<m.getName() <<" power : "<<m.getPower()<<std::endl;
	m.CloseAttack();
	std::cout<<m.getName() <<" power : "<<m.getPower()<<std::endl;

	w.TakeDamage(50);

	c.TakeDamage(50);
	c.TakeDamage(50);
	c.TakeDamage(50);


	return 0;
}