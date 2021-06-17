#include <iostream>
#include "Registro.hpp"
#include "Bh.hpp"

Bh::Bh() {}

Bh::Bh(string nombre) : Registro("BH", 0, 12) {
	value = 0;
}

void Bh::setValue(int valor) {
	value = valor;
}

int Bh::getValue() {
	return value;
}