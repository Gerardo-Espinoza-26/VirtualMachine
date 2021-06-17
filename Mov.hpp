#ifndef MOV_HPP
#define MOV_HPP

#include "Instrucciones.hpp"
#include "Registro.hpp"

class Mov : public Instruction {

	int dato;

public:
	Registro registro;

	Mov();
	Mov(Registro, int);

	void setDato(int);
	int getDato();

};

#endif