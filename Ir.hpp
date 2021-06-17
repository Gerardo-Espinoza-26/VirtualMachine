#ifndef IR_HPP
#define IR_HPP

#include <string>
#include "Registro.hpp"
#include "Instrucciones.hpp"

class Ir : public Registro {

	Instruction instruccion;

public:

	Ir();
	Ir(Instruction);

	void setInstruccion(Instruction);
	Instruction getInstruccion();

};

#endif