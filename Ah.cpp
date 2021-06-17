#include <iostream>
#include "Registro.hpp"
#include "Ah.hpp"

Ah::Ah() {}

Ah::Ah(string nombre) : Registro("AH", 0, 10) {
	value = 0;
}

void Ah::setValue(int valor) {
	value = valor;
}

int Ah::getValue() {
	return value;
}