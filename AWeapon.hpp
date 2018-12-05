#include <iostream>
#include <string>

class AWeapon{
	protected:
		std::string name_;
		int apcost_;
		int damage_;
	
	private:	
		AWeapon(const AWeapon &) = delete;
	
	public:
		AWeapon(const std::string &name, int apcost, int damage);
		~AWeapon() = default;
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
	
};
