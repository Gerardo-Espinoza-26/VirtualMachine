#include "Pc.hpp"
#include "Registro.hpp"

Pc::Pc() {}
Pc::Pc(int direccion) {
	Address = direccion;
}

void Pc::setAddress(int a) {
	Address = a;
}

int Pc::getAddress() {
	return Address;
}