
#include "Priest.hpp"

	Priest::Priest(const std::string &name,const std::string& race, int level):Character(name,race,level),Magician(name,race,level){


		_carac[Strength] = 4;
		_carac[Stamina] = 6;
		_carac[Intelligence] = 42;
		_carac[Spirit] = 21;
		_carac[Agility] = 2;

		std::cout << "Dazzle! " << _name << " ,Shadow Priest! " << std::endl;


	}

	int Priest::CloseAttack(){

		if(_power < 10)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << " uses a spirit explosion " << std::endl;
	
	return 10+_carac[Spirit];

	}

	int Priest::RangeAttack(){

		if(_power < 25)
	{

		std::cout << _name << " is too tired to attack " << std::endl;
		return 0;
	}
		std::cout << _name << ": The enemy pales when they see the face of Dazzle!" << std::endl;

		return 20 + Spirit;

	}

	void Priest::Heal(){
			if(_power < 10)
	{

		std::cout << _name << " is too tired to heal " << std::endl;
		return ;
	}


		std::cout << _name << ": Who needs healing?" << std::endl;
		_PV = std::min(MAX, _PV+70);
	}