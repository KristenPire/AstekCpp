#include "Paladin.hpp"


Paladin::Paladin(const std::string &name,const std::string& race,const std::string& Weapon, int level):Character(name,race,level),Priest(name,race,level),Warrior(name,race,Weapon,level){



}