#include "Registro.hpp"
#include "Instrucciones.hpp"
#include "Mar.hpp"

#include <iostream>
#include <string>

Mar::Mar() {}

Mar::Mar(int dir, Instruction inst) {
	direccion = dir;
	instruccion = inst;
}

void Mar::setDireccion(int dir) {
	direccion = dir;
}
int Mar::getDireccion() { return direccion; }

void Mar::setInstruccion(Instruction inst) {
	instruccion = inst;
}

Instruction Mar::getInstruccion() { 
	return instruccion; 
}