#include "WarpSystem.hh"

WarpSystem::QuantumReactor::QuantumReactor(){
	_stability = true;
}
WarpSystem::QuantumReactor::~QuantumReactor(){}

bool WarpSystem::QuantumReactor::isStable(){  return _stability;  }
void WarpSystem::QuantumReactor::setStability(bool stability){   _stability = stability;  }

WarpSystem::Core::Core(WarpSystem::QuantumReactor* coreReactor) : _coreReactor(coreReactor){} 
WarpSystem::Core::~Core(){}
WarpSystem::QuantumReactor* WarpSystem::Core::checkReactor(){  return _coreReactor;  }