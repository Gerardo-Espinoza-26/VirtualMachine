#include "Registro.hpp"
#include "Instrucciones.hpp"


Registro::Registro() {}

Registro::Registro(string name, int dato, int direccion) {
	data = dato;
	address = direccion;
	nombre = name;
}

void Registro::setData(int dato) {
	data = dato;
}

int Registro::getData() {
	return data;
}

void Registro::setAddress(int direccion) {
	address = direccion;
}

int Registro::getAddress() {
	return address;
}

void Registro::setNombre(string a) {
	nombre = a;
}

string Registro::getNombre() {
	return nombre;
}