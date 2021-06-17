#ifndef STO_HPP
#define STO_HPP
#include "Instrucciones.hpp"
#include "Registro.hpp"
#include <iostream>

class Sto : public Instruction {

	int Address;
	Registro registro;

public:

	Sto();
	Sto(int);

	void setAddress(int);
	int getAddress();

};

#endif