#ifndef MAR_HPP
#define MAR_HPP

#include "Registro.hpp"
#include "Instrucciones.hpp"
#include <string>

class Mar : public Registro {

	int direccion;
	Instruction instruccion;

public:

	Mar();
	Mar(int, Instruction);

	void setDireccion(int);
	int getDireccion();

	void setInstruccion(Instruction);
	Instruction getInstruccion();

};

#endif