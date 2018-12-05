#ifndef CHARACTER_HH
#define CHARACTER_HH

#include "PowerFist.hh"
#include "PlasmaRifle.hh"
#include "SuperMutant.hh"
#include "RadScorpion.hh"

class Character{
	public:
		Character(const std::string& name);
		~Character();

		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(AEnemy* enemy);

		const std::string& getName() const;
		AWeapon* getWeapon() const;
		int getAP() const;

	private:
		std::string _name;
		int _ap;
		AWeapon* _weapon;
};

std::ostream& operator<<(std::ostream& os, const Character& hero);

#endif