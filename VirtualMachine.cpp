#include "Cpu.hpp"
#include "VirtualMachine.hpp"


VM::VM() {}
VM::VM(Cpu TheCpu) {
	cpu = TheCpu;
}

void VM::setCpu(Cpu TheCpu) {
	cpu = TheCpu;
}
Cpu VM::getCpu() {
	return cpu;
}