#include "Victim.cpp"

class Peon : public Victim{
	public:
		Peon(std::string name_);
		~Peon();
		
		virtual void getPolymorphed()const;
		
		private:
		Peon(const Peon &) = delete;  //Dit au compilateur de ne pas créer le constructeur par réplication
};
