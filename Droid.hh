#include <iostream>
#include <string>

class Droid{
public:
	Droid(std::string serial);
	Droid (const Droid& droid);
	~Droid();

	std::string getId() const;
	size_t getEnergy()const;
	size_t getAttack()const;
	size_t getToughness()const;
	std::string getStatus()const;

	void setId(std::string newId);
	void setEnergy(size_t newEnergy);
	void setStatus(std::string* newStatus);

	void operator= ( const Droid & droid);
	bool operator==(const Droid & droid);
	bool operator!=(const Droid & droid);
    void operator<<(size_t  &newEnergy);
    





private:
	size_t energy;
	const size_t attack;
	const size_t toughness;
	std::string id;
	std::string* status;

};

 std::ostream& operator<< (std::ostream& objet ,const Droid &droid);