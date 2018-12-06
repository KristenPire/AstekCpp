#include "WarpSystem.hpp"



WarpSystem::QuantumReactor::QuantumReactor():_stability(true){



}


bool WarpSystem::QuantumReactor::isStable(){
/*

	function which verifies the stability of the QuantumReactor

*/

	return ( _stability == true );

}


void WarpSystem::QuantumReactor::setStability(bool stability){

/*

	Set stability of the reactor


*/

	_stability = stability;

}

WarpSystem::Core::Core(WarpSystem::QuantumReactor* coreReactor):_coreReactor(coreReactor){



}

const WarpSystem::QuantumReactor* WarpSystem::Core::checkReactor() const {


	return _coreReactor;
}


