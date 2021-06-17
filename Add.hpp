#ifndef ADD_HPP
#define ADD_HPP
#include "Instrucciones.hpp"
#include "Registro.hpp"

class Add : public Instruction {

	int num1;
	int num2;

public:

	Add();
	Add(Registro, Registro);

	void setNum1(int);
	int getNum1();

	void setNum2(int);
	int getNum2();

};

#endif