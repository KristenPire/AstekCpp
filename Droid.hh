#include <iostream>
#include <string>

class Droid{
public:
	Droid(std::string serial);
	Droid (const Droid& droid);
	~Droid();

	std::string getId();
	size_t getEnergy();
	size_t getAttack();
	size_t getToughness();
	std::string getStatus();

	void setId(std::string newId);
	void setEnergy(size_t newEnergy);
	void setStatus(std::string* newStatus);

	void operator= ( const Droid & droid);
	bool operator==(const Droid & droid);
	bool operator!=(const Droid & droid);
    void operator<<(size_t  &newEnergy);
    friend std::ostream& operator<< (std::ostream& objet ,const Droid &droid);





private:
	size_t energy;
	const size_t attack;
	const size_t toughness;
	std::string id;
	std::string* status;

};

