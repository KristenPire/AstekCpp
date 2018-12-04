#include "Droid.hh"

int main(){
	std::cout << "Preparing Droid!!!" << std::endl;

	Droid R2D2("R2-D2");
	Droid R4P19;
	Droid BB8;

	Droid C3PO("C3-PO");
	Droid Z6PO(C3PO);

	size_t charge = 200000;

	std::cout << R2D2 << std::endl;
	std::cout << R4P19 << std::endl;
	std::cout << BB8 << std::endl;
	std::cout << C3PO << std::endl;
	std::cout << Z6PO << std::endl;

	R4P19.setFeature("R4-P19");
	R2D2.setFeature(100);
	BB8 = R4P19;
	BB8.setFeature("BB-8");
	BB8 << charge;

	std::cout << R2D2 << std::endl;
	std::cout << R4P19 << std::endl;
	std::cout << BB8 << std::endl;
	std::cout << C3PO << std::endl;
	std::cout << Z6PO << std::endl;
	std::cout << "Remaining charge : " << charge << std::endl;

	if(Z6PO==C3PO)
		std::cout << "Z6PO serial : " << Z6PO.getSerial() << " and " << "C3PO serial : " << C3PO.getSerial() << " are same! Why name is changed" << std::endl;

	if(R2D2!=R4P19)
		std::cout << R2D2.getSerial() << " and " << R4P19.getSerial() << " are different. But R2-D2 is the best one" << std::endl;

	return 0;
}