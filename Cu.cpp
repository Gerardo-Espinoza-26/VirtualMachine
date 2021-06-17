#include "Cu.hpp"
#include "Instrucciones.hpp"
#include "Registro.hpp"
#include "Memoria.hpp"
#include "Programa.hpp"
#include "Add.hpp"
#include "Acc.hpp"
#include "Mov.hpp"
#include "Alu.hpp"

#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

void Cu::setInstruccion(Instruction theIns) {
    instruccion = theIns;
}
Instruction Cu::getInstruccion() {
    return instruccion;
}

void Cu::setPrograma(Programa ElProg) {
    programa = ElProg;
}
Programa Cu::getPrograma() {
    return programa;
}

Cu::Cu() {}

Cu::Cu(Memoria a) {
    for (int i = 0; i < 7; i++) {
        fetch(a);

        InstruccionApoyo = instruccion;

        decode(InstruccionApoyo);
        execute(InstruccionApoyo);
    }
    cout << "No hay mas instrucciones" << endl;
}


Instruction Cu::fetch(Memoria LaMemoria) {
    programa = LaMemoria.getPrograma();

    instruccion = programa.getInstruccion();
    return instruccion;
}



void Cu::decode(Instruction a) {
    switch (a.getCode()) {

    case 19:
        cout << "Instruction: " << a.getName() << endl;
        break;

    case 20:

        cout << "Instruction: " << a.getName() << " " << a.getRegistro().getData() << " hacia " << a.getRegistro().getNombre() << endl;
        break;

    case 21:
        cout << "Instruction: " << a.getName() << " " << add.getNum1() << " + " << add.getNum2() << " = ";

        break;

    case 25:
        cout << "Instruction: " << a.getName() << " hacia " << a.getRegistro().getAddress() << " ";
        break;

    case 26:
        cout << "Instruction: " << a.getName();
        break;
    }
}



void Cu::execute(Instruction a) {

    switch (a.getCode()) {

    case 19:
        break;

    case 20:

        mov.setRegistro(a.getRegistro());
        mov.setDato(a.getRegistro().getData());

        break;

    case 21:

        acc.setResultado(alu.suma(add.getNum1(), add.getNum2()));
        cout << acc.getResultado() << endl;

        break;

    case 25:

        cout << acc.getResultado() << endl;

        break;

    case 26:
        break;
    }
}