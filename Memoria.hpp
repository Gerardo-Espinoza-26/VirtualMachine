#ifndef MEMORIA_HPP
#define MEMORIA_HPP
#include "Programa.hpp"

class Memoria {

	Programa programa;

public:

	Memoria();
	Memoria(Programa);

	void setPrograma(Programa);
	Programa getPrograma();

};


#endif