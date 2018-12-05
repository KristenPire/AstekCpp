#include "AWeapon.cpp"

class PlasmaRifle : public AWeapon{
	private:
		PlasmaRifle(const PlasmaRifle &) = delete;
	
	public:
		PlasmaRifle();
		~PlasmaRifle() = default;
		virtual void attack() const;
	
};
