#include "Alu.hpp"
#include "Acc.hpp"
#include <cstdio>
#include <iostream>

Alu::Alu() {}

Alu::Alu(int a, int b) {
	operador1 = a;
	operador2 = b;
}

void Alu::setOperador1(int a) {
	operador1 = a;
}

int Alu::getOperador1() { return operador1; }

void Alu::setOperador2(int a) {
	operador2 = a;
}

int Alu::getOperador2() { return operador2; }

int Alu::suma(int a, int b) {

	operador1 = a;
	operador2 = b;

	return operador1 + operador2;
}

int Alu::resta(int a, int b) {

	operador1 = a;
	operador2 = b;

	return operador1 - operador2;
}

int Alu::multiplicacion(int a, int b) {

	operador1 = a;
	operador2 = b;

	return operador1 * operador2;
}

int Alu::division(int a, int b) {

	operador1 = a;
	operador2 = b;

	return operador1 / operador2;
}