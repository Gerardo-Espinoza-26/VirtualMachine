#include "Registro.hpp"
#include "Acc.hpp"
#include <iostream>

using namespace std;

Acc::Acc() {}

Acc::Acc(string nombre) {
	resultado = 0;
}

int Acc::getResultado() {
	return resultado;
}

void Acc::setResultado(int res) {
	resultado = res;
}