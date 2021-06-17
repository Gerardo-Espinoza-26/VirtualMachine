#ifndef PROGRAMA_HPP
#define PROGRAMA_HPP
#include "Instrucciones.hpp"

class Programa {

	int NumCasillas;
	Instruction instruccion;

public:

	Programa();

	Instruction instrucciones[10];

	void addInstruction(Instruction);

	void setNumCasilla(int);
	int getNumCasillas();

	Instruction getInstruccion();

};

#endif