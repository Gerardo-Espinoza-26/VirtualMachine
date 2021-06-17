#include "Mult.hpp"
#include "Instrucciones.hpp"
#include <cstdio>

Mult::Mult() {}

Mult::Mult(Registro a, Registro b) : Instruction("Mult", 23, 3) {
	num1 = a.getData();
	num2 = b.getData();
}

void Mult::setNum1(int a) {
	num1 = a;
}

int Mult::getNum1() {
	return num1;
}

void Mult::setNum2(int a) {
	num2 = a;
}

int Mult::getNum2() {
	return num2;
}