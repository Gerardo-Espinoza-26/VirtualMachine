#ifndef BH_HPP
#define BH_HPP

#include "Registro.hpp"

using namespace std;

class Bh : public Registro {

	int value;

public:

	Bh();
	Bh(string);

	int getValue();
	void setValue(int);

};

#endif