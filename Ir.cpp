#include <string>
#include "Ir.hpp"
#include "Registro.hpp"
#include "Instrucciones.hpp"

using namespace std;


Ir::Ir() {}
Ir::Ir(Instruction a) {
	instruccion = a;
}

void Ir::setInstruccion(Instruction a) {
	instruccion = a;
}

Instruction Ir::getInstruccion() {
	return instruccion;
}