
#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"
#include "Hunter.hpp"


int main(){
	Character c("poney", 42);
	Warrior w("thor" , 42, "hammer");
	Priest p("Iopi",84);
	Mage m("Fluffy",40);
	Paladin pa("Phiste",2);
	Hunter h("Fourdr",40);

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


	std::cout<<pa.getName() <<" power : "<<pa.getPower()<<std::endl;
	pa.RangeAttack();
	std::cout<<pa.getName() <<" power : "<<pa.getPower()<<std::endl;
	pa.CloseAttack();
	pa.TakeDamage(10);
	std::cout<<pa.getName() <<" Pv : "<<pa.getPv()<<std::endl;
	pa.Heal();
	std::cout<<pa.getName() <<" Pv : "<<pa.getPv()<<std::endl;


	std::cout<<h.getName() <<" power : "<<h.getPower()<<std::endl;
	h.RangeAttack();
	std::cout<<h.getName() <<" power : "<<h.getPower()<<std::endl;
	h.CloseAttack();
	h.TakeDamage(10);
	std::cout<<h.getName() <<" Pv : "<<h.getPv()<<std::endl;
	h.Heal();
	std::cout<<h.getName() <<" Pv : "<<h.getPv()<<std::endl;
	h.TakeDamage(70);
	std::cout<<h.getName() <<" Pv : "<<h.getPv()<<std::endl;
	std::cout<<h.getName() <<" Power : "<<h.getPower()<<std::endl;

	h.RestorePower();
	std::cout<<h.getName() <<" Power : "<<h.getPower()<<std::endl;




	w.TakeDamage(50);

	c.TakeDamage(50);
	c.TakeDamage(50);
	c.TakeDamage(50);


	return 0;
}