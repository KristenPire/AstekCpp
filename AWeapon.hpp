#include <iostream>
#include <string>

class AWeapon{
	protected:
		const std::string name_;
		const int apcost_;
		const int damage_;
	
	private:	
		AWeapon(const AWeapon &) = delete;
	
	public:
		AWeapon(const std::string &name, int apcost, int damage);
		virtual ~AWeapon() = default;
		const std::string &getName() const;  //On met une reference, sinon ça recréerait des string à chaque fois qu'on appelle la fonction
		//On met une const référence, sinon il refuse de sortir name_, vu que c'est un const et sortir une référence non const sur name_ permettrait de le changer
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
	
};
