#ifndef ACC_HPP
#define ACC_HPP
#include "Registro.hpp"
#include <iostream>

using namespace std;

class Acc : public Registro {

	int resultado;

public:
	Acc();
	Acc(string);


	int getResultado();
	void setResultado(int);

};

#endif