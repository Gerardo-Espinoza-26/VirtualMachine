#ifndef DIV_HPP
#define DIV_HPP
#include "Instrucciones.hpp"
#include "Registro.hpp"

class Div : public Instruction {

	int num1;
	int num2;

public:

	Div();
	Div(Registro, Registro);

	void setNum1(int);
	int getNum1();

	void setNum2(int);
	int getNum2();

};


#endif