#ifndef AL_HPP
#define AL_HPP

#include "Registro.hpp"

using namespace std;

class Al : public Registro {

	int value;

public:

	Al();
	Al(string);

	int getValue();
	void setValue(int);

};

#endif