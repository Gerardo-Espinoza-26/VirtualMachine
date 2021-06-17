#include "Sto.hpp"
#include "Instrucciones.hpp"
#include "Registro.hpp"
#include <iostream>

Sto::Sto() {}

Sto::Sto(int direccion) : Instruction("Sto", 25, 2) {

	registro.setAddress(direccion);

}

void Sto::setAddress(int TheAddress) {

	Address = TheAddress;

}

int Sto::getAddress() {

	return Address;

}