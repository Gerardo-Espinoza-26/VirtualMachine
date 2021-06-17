#ifndef VIRTUALMACHIN_HPP
#define VIRTUALMACHIN_HPP

#include "Cpu.hpp"

class VM {

	Cpu cpu;

public:

	VM();
	VM(Cpu);

	void setCpu(Cpu);
	Cpu getCpu();

};

#endif