#include "Instrucciones.hpp"
#include "Registro.hpp"

Instruction::Instruction() {}

Instruction::Instruction(string nombre, int codigo, int longitud) {
    name = nombre;
    code = codigo;
    length = longitud;
}

string Instruction::getName() { return name; }
void Instruction::setName(string nombre) {
    name = nombre;
}

int Instruction::getCode() { return code; }
void Instruction::setCode(int codigo) {
    code = codigo;
}

int Instruction::getLength() { return length; }
void Instruction::setLength(int longitud) {
    length = longitud;
}

Registro Instruction::getRegistro() {
    return registro;
}

void Instruction::setRegistro(Registro TheRegistro) {
    registro = TheRegistro;
}