#ifndef SUPERMUTANT
#define SUPERMUTANT

class SuperMutant
{


public:
	SuperMutant(int hp = 170, const std::string &type = "Super Mutant");
	~SuperMutant();
	virtual void takeDamage(int damage);
};

#endif