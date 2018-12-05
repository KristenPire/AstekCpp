#include <iostream>
#include <string>

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(){
	//~ Character bill("Bill");
	//~ AWeapon *pr(new PlasmaRifle());
	//~ bill.equip(pr);
	//~ std::cout << "plop" << std::endl;
	//~ std::cout << bill;
	//~ std::cout << "superplop" << std::endl;
	//~ return 0;
	
	
	const auto preda = new Character("Predator");
	const auto prey = new RadScorpion();
	
	std::cout << *preda;
	
	AWeapon *pr(new PlasmaRifle());
	AWeapon *pf(new PowerFist());
	
	preda->equip(pr);
	std::cout << *preda;
	preda->equip(pf);
	
	preda->attack(prey);
	std::cout << *preda;
	preda->equip(pr);
	std::cout << *preda;
	preda->attack(prey);
	std::cout << *preda;
	preda->attack(prey);
	std::cout << *preda;
	
	return 0;
}
