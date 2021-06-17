#include "Programa.hpp"
#include "Instrucciones.hpp"
#include <string>

Programa::Programa() {
	NumCasillas = 0;
}

void Programa::addInstruction(Instruction TheInstruction) {
	instrucciones[NumCasillas] = TheInstruction;
	NumCasillas++;
}

void Programa::setNumCasilla(int numero) {
	NumCasillas = numero;
}

int Programa::getNumCasillas() {
	return NumCasillas;
}

Instruction Programa::getInstruccion() {
	instruccion = instrucciones[NumCasillas];
	NumCasillas--;
	return instruccion;
}