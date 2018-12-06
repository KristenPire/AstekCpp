
#include "Warrior.hpp"

	Warrior::Warrior(const std::string &name,const std::string& race,const std::string& Weapon, int level):_Weapon(Weapon),Character(name,race,level){

		_carac[Strength] = 12;
		_carac[Stamina] = 12;
		_carac[Intelligence] = 1;
		_carac[Spirit] = 7;
		_carac[Agility] = 3;
		std::cout << "I'm " << _name << " , a fucccccccccccccccking WAAAAAAAAAAAAAAAARioOOr!!" << std::endl;

	}

int Warrior::CloseAttack(){

	if(_power < 30)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << " strikes with his " << _Weapon << std::endl;
	return 20+_carac[Strength];

	}

int Warrior::RangeAttack(){

		std::cout << _name << " can't use a long range weapon" << std::endl;
		std::cout << _name << " intercepts" << std::endl;

	return 0;

	}

void Warrior::Heal(){

	std::cout << _name << " takes a potion" << std::endl;

	_PV = std::min(MAX, _PV+50);

	}

void Warrior::RestorePower(){


	std::cout << _name << " eats some fried chicken" << std::endl;

	_power = std::min(MAX,100+_power);

	}


