#ifndef PC_HPP
#define PC_HPP

#include "Registro.hpp"

class Pc : public Registro {

	int Address;

public:

	Pc();
	Pc(int);

	void setAddress(int);
	int getAddress();

};

#endif