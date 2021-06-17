#ifndef ALU_HPP
#define ALU_HPP

#include <cstdio>

class Alu {

	int operador1;
	int operador2;

public:

	Alu();
	Alu(int, int);

	void setOperador1(int);
	int getOperador1();

	void setOperador2(int);
	int getOperador2();

	int suma(int, int);
	int resta(int, int);
	int multiplicacion(int, int);
	int division(int, int);

};


#endif