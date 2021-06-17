#include "Div.hpp"
#include "Instrucciones.hpp"
#include <cstdio>

Div::Div() {}

Div::Div(Registro a, Registro b) : Instruction("Div", 24, 3) {
	num1 = a.getData();
	num2 = b.getData();
}

void Div::setNum1(int a) {
	num1 = a;
}

int Div::getNum1() {
	return num1;
}

void Div::setNum2(int a) {
	num2 = a;
}

int Div::getNum2() {
	return num2;
}