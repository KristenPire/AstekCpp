#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

#include <iostream>
#include <string>


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
	std::cout<<_name<<" destroyed...";
}

void PlasmaRifle::attack()const
{
	std::cout<<"Piouuuu piouuuu piouuuu !"<<std::endl;
	std::cout<<std::endl;
}