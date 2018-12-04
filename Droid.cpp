#include "Droid.hh"

Droid::Droid(std::string serial=""): Id(serial), Energy(50), Attack(25), Toughness(15), Status("Standing by")
{
	std::cout << "Droid \'"  << this->Id << " \' Activated" <<  std::endl;
}

Droid::Droid(const Droid d): Id(d.Id), Energy(d.Energy), Attack(d.Attack), Toughness(d.Toughness), Status(d.Status)
{
	std::cout << "Droid \'"  << this->Id << " \' Activated" <<  std::endl;
}



Droid::~Droid(){
	std::cout << "Droid \'"  << this->Id << " \' Destroyed" <<  std::endl;
}

int main(){
	Droid d;
	Droid d1("Avenger");
	size_t Durasel = 200;
	
	Std::cout << d << std::endl;
	Std::cout << d1 << std::endl;
	d = d1;
	d.setStatus(new std::string("Kill Kill Kill!"));
	d << Durasel;
	std::cout << d << "--" << Durasel << std::endl;
	Droid d2 = d;
	d.setId("Rex");
	std::cout << (d2 != d) << std::endl;
	
	return 0;
}


