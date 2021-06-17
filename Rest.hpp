#ifndef REST_HPP
#define REST_HPP
#include "Instrucciones.hpp"
#include "Registro.hpp"


class Rest : public Instruction {

	int num1;
	int num2;

public:

	Rest();
	Rest(Registro, Registro);

	void setNum1(int);
	int getNum1();

	void setNum2(int);
	int getNum2();

};

#endif