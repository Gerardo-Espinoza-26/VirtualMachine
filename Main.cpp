#include "VirtualMachine.hpp"
#include "Cpu.hpp"
#include "Instrucciones.hpp"
#include "Programa.hpp"
#include "Memoria.hpp"
#include "Registro.hpp"
#include "Pc.hpp"
#include "Al.hpp"
#include "Bl.hpp"
#include "Mov.hpp"
#include "Add.hpp"
#include "Sto.hpp"
#include "End.hpp"
#include "Alu.hpp"
#include "Start.hpp"
#include "Cu.hpp"

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

	//Creacion de AL y BL:
	Al al("al");
	Bl bl("bl");
	
	//Creacion de ALU
	Alu alu;
	
	//Creacion de instrucciones
	Start start;
	Mov move1(al, 6);   //Actualiza el valor de AL a 6
	Mov move2(bl, 7);   //Actualiza el valor de BL a 7
	Add add(al, bl);    //suma los valores que estan dentro de AL y BL
	Sto sto(8);
	End end;
	
	//Creacion del programa
	Programa miPrograma;
	miPrograma.addInstruction(start);
	miPrograma.addInstruction(move1);
	miPrograma.addInstruction(move2);
	miPrograma.addInstruction(add);
	miPrograma.addInstruction(sto);
	miPrograma.addInstruction(end);
	
	//Creacion de Memoria
	Memoria miMemoria(miPrograma);
	
	//Creacion del CU

	return EXIT_SUCCESS;

}