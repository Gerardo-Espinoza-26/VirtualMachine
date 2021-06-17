#ifndef REGISTRO_HPP
#define REGISTRO_HPP


#include<iostream>
#include<string>

using namespace std;
class Registro {

	int data;
	int address;
	string nombre;

public:

	Registro();

	Registro(string, int, int);

	void setData(int);
	int getData();

	void setAddress(int);
	int getAddress();

	void setNombre(string);
	string getNombre();

};

#endif