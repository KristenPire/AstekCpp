#include "Victim.cpp"

class Peon : public Victim{
	public:
		Peon(std::string name_);
		~Peon();
		
		virtual void getPolymorphed()const;
};
