#include "PlasmaRifle.cpp"

class PowerFist : public AWeapon{
	private:
		PowerFist(const PowerFist &) = delete;
	
	public:
		PowerFist();
		~PowerFist() = default;
		virtual void attack() const;
	
};
