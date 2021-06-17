#ifndef CU_HPP
#define CU_HPP

#include "Instrucciones.hpp"
#include "Registro.hpp"
#include "Memoria.hpp"
#include "Programa.hpp"
#include "Add.hpp"
#include "Acc.hpp"
#include "Mov.hpp"
#include "Alu.hpp"

#include <string>
#include <cstdio>
#include <iostream>

class Cu {

	Instruction instruccion;
	Instruction InstruccionApoyo;
	Programa programa;
	Add add;
	Acc acc;
	Mov mov;
	Alu alu;
	Registro registro;

	int dato;

public:

	Cu();
	Cu(Memoria);

	Instruction fetch(Memoria);
	void decode(Instruction);
	void execute(Instruction);

	void setInstruccion(Instruction);
	Instruction getInstruccion();

	void setPrograma(Programa);
	Programa getPrograma();


};

#endif