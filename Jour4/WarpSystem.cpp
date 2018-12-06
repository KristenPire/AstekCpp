#include "WarpSystem.hpp"

#include <string>
#include <iostream>

WarpSystem::QuantumReactor::QuantumReactor()
{
	_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
	std::cout<<"Quantum Reactor deactivated..."<<std::endl;
}

bool WarpSystem::QuantumReactor::isStable()
{
	return _stability;
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
	_stability = stability;
}



WarpSystem::QuantumReactor::Core::Core(QuantumReactor *coreReactor)
{
	_coreReactor = coreReactor;
}

WarpSystem::QuantumReactor::Core::~Core()
{
	std::cout<<"The core is now offline"<<std::endl;
}

WarpSystem::QuantumReactor *WarpSystem::QuantumReactor::Core::checkReactor()
{
	return _coreReactor;
}