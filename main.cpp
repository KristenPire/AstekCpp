#include "Paladin.hh"
#include "Hunter.hh"

int main(){
	Hunter h;
	h.CloseAttack();
	h.RangeAttack();
	h.Heal();
	h.RestorePower();
	h.TakeDamage(100);

	return 0;
}