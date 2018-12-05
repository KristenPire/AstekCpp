#include <string>
#include <iostream>

class Victim{
	protected:
		const std::string name;

	public:
		Victim(std::string name_);
		~Victim();
		std::string getName();
		
		virtual void getPolymorphed()const;
		
		private:
		Victim(const Victim &) = delete;  //Dit au compilateur de ne pas créer le constructeur par réplication
};

