#ifndef CPU_HPP
#define CPU_HPP

#include "Memoria.hpp"
#include "Alu.hpp"
#include "Cu.hpp"

class Cpu {

	Memoria memoria;
	Alu alu;
	Cu cu;

public:

	Cpu();
	Cpu(Memoria, Alu, Cu);

	void setMemoria(Memoria);
	Memoria getMemoria();

	void setAlu(Alu);
	Alu getAlu();

	void setCu(Cu);
	Cu getCu();


};

#endif