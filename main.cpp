#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"


int main()
{
    const auto preda = new Character("Predator");
    const auto prey = new RadScorpion();

    std::cout<<*preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());

    preda->equip(pr);
    std::cout <<*preda;
    preda->equip(pf);

    preda->attack(prey);
    std::cout<<*preda;
    preda->equip(pr);
    std::cout<<*preda;
    preda->attack(prey);
    std::cout<<*preda;
    preda->attack(prey);
    std::cout<<*preda;

    return 0;

    std::cout << "Hello World!" << std::endl;
    return 0;
}
