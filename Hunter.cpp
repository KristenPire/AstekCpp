#include "Hunter.hpp"


Hunter::Hunter(const std::string &name,const std::string& race,const std::string& Weapon, int level):Character(name,race,level),Warrior(name,race,Weapon,level){

	std::cout << _name << "is born from a tree " << std::endl;
}


int Hunter::RangeAttack(){

	if(_power < 25)
		{

			std::cout << _name << " is too tired to attack " << std::endl;
			return 0;
		}
			std::cout << _name << " strikes with his " << _Weapon << std::endl;
		return 20+_carac[Agility];

	}



void Hunter::RestorePower(){

	std::cout << _name << " meditates" << std::endl;

	_power = std::min(MAX,100+_power);

}