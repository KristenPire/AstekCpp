#include <iostream>
#include <string>
#ifndef AWEAPON_LD
#define AWEAPON_LD
#include "AWeapon.hpp"
#endif
#ifndef AENEMY_LD
#define AENEMY_LD
#include "AEnemy.hpp"
#endif

class Character{
	private:
		const std::string name_;
		int ap_;
		AWeapon *equipped_weapon;
		 
		Character(const Character &) = delete;
	
	public:
		Character(const std::string &name);
		~Character() = default;
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(AEnemy *enemy);
		
		const std::string &getName() const; //On met une reference, cf AWeapon.hpp pour explication
		int getAP() const;
		const std::string &getWeaponName() const;
		bool hasWeapon() const;
};

inline std::ostream& operator<<(std::ostream& os, Character& c)  
{  	
    if(c.hasWeapon()){
		os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeaponName() << std::endl;  
		return os;  
	}
	else{
		os << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;  
		return os; 
	}
} 
