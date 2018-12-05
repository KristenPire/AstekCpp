#include <iostream>
#include <string>

class AEnemy{
	protected:
		int hp_;
		const std::string type_;
	
	private : 
		AEnemy(const AEnemy &) = delete;
	
	public:
		AEnemy(int hp, const std::string &type);
		virtual ~AEnemy() = default;
		
		virtual void takeDamage(int damage);
		
		const std::string &getType() const; //On met une reference, cf AWeapon.hpp pour explication
		int getHP() const;
	
};
