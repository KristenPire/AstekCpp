#include "Character.hh"

int main(){
	const auto preda = new Character("Predator");
	const auto prey = new RadScorpion();

	std::cout << *preda;

	AWeapon* pf(new PowerFist);
	AWeapon* pr(new PlasmaRifle);

	preda->equip(pr);

	preda->attack(prey);
	preda->equip(pf);
	std::cout << *preda;
	std::cout << prey->getHP() << std::endl;

	std::cout << *preda;

	delete preda;
	delete prey;
	delete pr;

	return 0;
}