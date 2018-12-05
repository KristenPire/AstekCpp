#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(){

	const Character* preda = new Character("Predator");
	const RadScorpion* prey = new RadScorpion();

	std::cout << *preda;

	AWeapon *pr(new PlasmaRifle());
	AWeapon *pf(new PowerFist());


	return 0;
}