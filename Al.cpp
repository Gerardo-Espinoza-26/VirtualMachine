#include <iostream>
#include "Registro.hpp"
#include "Al.hpp"

Al::Al() {}

Al::Al(string nombre) : Registro("AL", 0, 11) {
	value = 0;
}

void Al::setValue(int valor) {
	value = valor;
}

int Al::getValue() {
	return value;
}