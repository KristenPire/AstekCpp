#include <iostream>
#include <string>

class Droid{
	private:
		std::string Id;
		size_t Energy;
		const size_t Attack;
		const size_t Toughness;
		std::string *Status;
		
	public:
		Droid(std::string serial);
		Droid(const Droid &d);
		~Droid();
		void operator=(const Droid &d);
		bool operator==(const Droid &d);
		bool operator!=(const Droid &d);
		
		std::string getId() const;
		size_t getEnergy() const;
		size_t getAttack() const;
		size_t getToughness() const;
		std::string getStatus() const;
		
		void setId(std::string);
		void setEnergy(size_t);
		void setStatus(std::string*);
		
		Droid& operator<<(size_t &charge);
};
