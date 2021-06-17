#include "Registro.hpp"
#include "Mbr.hpp"
#include <iostream>
#include <string>

using namespace std;

Mbr::Mbr() {}

Mbr::Mbr(int dir, Instruction inst) {
	direccion = dir;
	instruccion = inst;
}

void Mbr::setDireccion(int dir) {
	direccion = dir;
}
int Mbr::getDireccion() { return direccion; }

void Mbr::setInstruccion(Instruction inst) {
	instruccion = inst;
}

Instruction Mbr::getInstruccion() { return instruccion; }