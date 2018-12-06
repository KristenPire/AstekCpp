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