#include "Paladin.hh"

int main(){
	Character c("poney", 42);
	Warrior h;
	Mage m("Fluffy", 40);
	Priest p;
	Paladin pa;
	c.TakeDamage(h.CloseAttack());
	c.Heal();
	h.RestorePower();
	c.TakeDamage(h.RangeAttack());
	c.TakeDamage(pa.Intercept());

	return 0;
}