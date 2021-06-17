#ifndef AH_HPP
#define AH_HPP

#include "Registro.hpp"

using namespace std;

class Ah : public Registro {

	int value;

public:

	Ah();
	Ah(string);

	int getValue();
	void setValue(int);

};

#endif