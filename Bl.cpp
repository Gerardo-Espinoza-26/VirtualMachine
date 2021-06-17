#include <iostream>
#include "Registro.hpp"
#include "Bl.hpp"

Bl::Bl() {}

Bl::Bl(string nombre) : Registro("BL", 0, 13) {
	value = 0;
}

void Bl::setValue(int valor) {
	value = valor;
}

int Bl::getValue() {
	return value;
}