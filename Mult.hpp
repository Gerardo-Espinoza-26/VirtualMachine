#ifndef MULT_HPP
#define MULT_HPP
#include "Instrucciones.hpp"
#include "Registro.hpp"

class Mult : public Instruction {

	int num1;
	int num2;

public:

	Mult();
	Mult(Registro, Registro);

	void setNum1(int);
	int getNum1();

	void setNum2(int);
	int getNum2();

};


#endif