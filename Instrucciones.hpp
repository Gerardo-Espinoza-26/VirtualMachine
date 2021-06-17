#ifndef INSTRUCCIONES_HPP
#define INSTRUCCIONES_HPP
#include "Registro.hpp"
#include<iostream>
#include<string>


using namespace std;

class Instruction {

	string name;
	int code;
	int length;
	Registro registro;

public:

	Instruction();
	Instruction(string, int, int);

	string getName();
	void setName(string);

	int getCode();
	void setCode(int);

	int getLength();
	void setLength(int);

	Registro getRegistro();
	void setRegistro(Registro);

};

#endif
