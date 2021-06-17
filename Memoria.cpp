#include "Programa.hpp"
#include "Memoria.hpp"

Memoria::Memoria() {}

Memoria::Memoria(Programa a) {
	programa = a;
}

void Memoria::setPrograma(Programa a) {
	programa = a;
}

Programa Memoria::getPrograma() {
	return programa;
}