#include "Priest.hpp"

Mage::Mage(const std::string &name,int level):Character(name,level){
	std::cout<< _name << " teleported "<<std::endl;
	_race="Gnome";
	_stamina=6;
	_spirit=11;
	_agility=7;
	_strength=6;
	_intelligence=12;
};


void Mage::RestorePower(){
	_pv=100;

	std::cout<< " takes a mana potion "<<std::endl;
	if (_pv<=(100-50-_intelligence)){
		_pv+=(50+_intelligence);
	}else{
		_pv=100;
	}
};

int Mage::CloseAttack(){
	std::cout<< _name<<" blinks "<<std::endl;
	if (_energy>=10){
		_energy-=10;
		return 10;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}

};

int Mage::RangeAttack(){
	std::cout<< _name<<" launches a fire ball"<<std::endl;
	if (_energy>=25){
		_energy-=25;
		return 20+ _spirit;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}
};

Priest::Priest(const std::string &name,int level):Mage(name,level){
	std::cout<< _name << " enters in the order "<<std::endl;
	_race="Orc";
	_stamina=4;
	_spirit=21;
	_agility=2;
	_strength=4;
	_intelligence=42;
};

void Priest::Heal(){
	std::cout<<_name<< " takes a potion"<<std::endl;
	if (_energy<=10){
		std::cout<<" doesnt' have enough energy to heal"<< std::endl;
	}else{
		std::cout<< _name<<" casts a little heal spell "<< std::endl;
		if (_pv<=30){
			_pv+=70;
		}else{
			_pv=100;
		}
	}
};

int Priest::CloseAttack(){
	std::cout<< _name<<" uses a spirit explosion "<<std::endl;
	if (_energy>=10){
		_energy-=10;
		return 10+_spirit;
	}else {
		std::cout<<" attack failed, not enough energy"<<std::endl;
		return 0;
	}

};
