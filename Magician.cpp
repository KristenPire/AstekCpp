#include "Magician.hpp"


	Magician::Magician(const std::string &name,const std::string& race, int level):Character(name,race,level){

		_carac[Strength] = 4;
		_carac[Stamina] = 6;
		_carac[Intelligence] = 12;
		_carac[Spirit] = 11;
		_carac[Agility] = 7;

		std::cout << "Thus I invoke " << _name << "! Knowledge is my power ! " << std::endl;

	}


	int Magician::CloseAttack(){

		std::cout << "I can't attack in Close range" << std::endl;

		Magician::RangeAttack();

	return 0;


	}

	int Magician::RangeAttack(){

		if(_power < 25)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << ": Prepare your mind for death!" << std::endl;

		return 20 + Spirit;
	}

	void Magician::Heal(){


		std::cout << _name << " takes a potion" << std::endl;

		_PV = std::min(MAX, _PV+50);

	}

	void Magician::RestorePower(){


		_PV = std::min(MAX, _power+50+_carac[Intelligence]);
		std::cout << _name << " takes a mana potion " << std::endl;

	}