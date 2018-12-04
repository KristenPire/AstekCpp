#include <iostream>
#include <string>

class Droid {
	private:
		std::string Id;
		size_t Energy;
		const size_t Attack;
		const size_t Toughness;
		std::string *Status;
		
	public:
		Droid(std::string serial);
		~Droid();
		std::string getId();
		size_t getEnergy();
		const size_t getAttack();
		const size_t getToughness();
		std::string *getStatus();
		
		std::string setId();
		size_t setEnergy();
		std::string *setStatus();
}
