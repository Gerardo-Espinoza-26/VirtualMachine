#ifndef MBR_HPP
#define MBR_HPP
#include "Registro.hpp"
#include "Instrucciones.hpp"
#include <string>

using namespace std;

class Mbr : public Registro {

	int direccion;
	Instruction instruccion;

public:

	Mbr();
	Mbr(int, Instruction);

	void setDireccion(int);
	int getDireccion();

	void setInstruccion(Instruction);
	Instruction getInstruccion();


};

#endif