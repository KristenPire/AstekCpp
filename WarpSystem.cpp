#include "WarpSystem.hpp"

// constructeur du Quantum reactor

WarpSystem::QuantumReactor::QuantumReactor(){
	_stability=true;
};

// getteur de stability

bool WarpSystem::QuantumReactor::isStable(){
	return _stability;
}

// setteur de la stabilite

void  WarpSystem::QuantumReactor::setStability(bool stability){
	_stability=stability;
}

// constructeur du core reactor

WarpSystem::Core::Core(QuantumReactor * coreReactor ){
	_coreReactor=coreReactor;
}

// getteur du reactor

WarpSystem::QuantumReactor* WarpSystem::Core::checkReactor(){
	return _coreReactor;
};