#include "Droid.hh"

Droid::Droid(std::string serial):_serial(serial), _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by")) {
	std::cout << "Droid " << _serial << " Activated"  << std::endl;
}

Droid::Droid(const Droid& droid):_serial(droid._serial), _energy(droid._energy), _attack(droid._attack), _toughness(droid._toughness), _status(new std::string(*droid._status)){
	std::cout << "Droid " << _serial << " Activated, Memory Dumped"  << std::endl;
}

Droid::~Droid(){
	std::cout << "Droid " << _serial << " Destroyed"  << std::endl;
	delete _status;
}

std::string Droid::getSerial() const{  return _serial;  }
size_t Droid::getEnergy() const{  return _energy;  }
size_t Droid::getAttack() const{  return _attack;  }
size_t Droid::getToughness() const{  return _toughness;  }
std::string Droid::getStatus() const{  return *_status;  }

void Droid::setFeature(std::string serial){  _serial = serial; }
void Droid::setFeature(size_t energy){  _energy = energy;  }
void Droid::setFeature(std::string* status){  *_status = *status;  }

bool Droid::operator==(Droid const &droid) const{  
	return(_serial==droid._serial)&&(_energy==droid._energy)&&(_attack==droid._attack)&&(_toughness==droid._toughness)&&(*_status==*droid._status);
}

void Droid::operator=(Droid const &droid){  
	_serial = droid._serial;
	_energy = droid._energy;
	*_status = *droid._status;
}

bool Droid::operator!=(Droid const &droid) const{  
	return(_serial!=droid._serial)||(_energy!=droid._energy)||(_attack!=droid._attack)||(_toughness!=droid._toughness)||(*_status!=*droid._status);
}

void Droid::operator<<(size_t& energy){
	if (_energy < 100){
		size_t charge = 100 -_energy;
		_energy += charge;
		energy -= charge;
	}
}

std::ostream& operator<<(std::ostream& os, const Droid& droid){
	os << "Droid " << droid.getSerial() << " " << droid.getStatus() << " " << droid.getEnergy();
	return os;
}