#ifndef BL_HPP
#define BL_HPP

#include "Registro.hpp"

using namespace std;

class Bl : public Registro {

	int value;

public:

	Bl();
	Bl(string);

	int getValue();
	void setValue(int);

};

#endif