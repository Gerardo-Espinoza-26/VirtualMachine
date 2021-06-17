#include "Cpu.hpp"
#include "Memoria.hpp"
#include "Alu.hpp"
#include "Cu.hpp"

Cpu::Cpu() {}
Cpu::Cpu(Memoria LaMemoria, Alu TheAlu, Cu TheCu) {
	memoria = LaMemoria;
	alu = TheAlu;
	cu = TheCu;
}

void Cpu::setMemoria(Memoria LaMemoria) {
	memoria = LaMemoria;
}
Memoria Cpu::getMemoria() {
	return memoria;
}

void Cpu::setAlu(Alu TheAlu) {
	alu = TheAlu;
}
Alu Cpu::getAlu() {
	return alu;
}

void Cpu::setCu(Cu TheCu) {
	cu = TheCu;
}
Cu Cpu::getCu() {
	return cu;
}