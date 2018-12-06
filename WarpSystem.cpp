#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor():_stability(true){}

bool WarpSystem::QuantumReactor::isStable(){
	return _stability;
}

void WarpSystem::QuantumReactor::setStability(bool stability){
	_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *coreReactor):_coreReactor(coreReactor){}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor(){
	QuantumReactor *ptr = _coreReactor;
	return ptr;
}
