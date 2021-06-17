#include "Mov.hpp"
#include "Registro.hpp"
#include "Instrucciones.hpp"
#include <iostream>

using namespace std;

Mov::Mov() {}

//el dato tipo entero "b", se guarda dentro del registro que se introduce "a"
Mov::Mov(Registro a, int b) : Instruction("Mov", 20, 3) {
	registro = a;
	registro.setData(b);
}

void Mov::setDato(int a) {
	dato = a;
	registro.setData(dato);
}

int Mov::getDato() {
	return dato;
}
