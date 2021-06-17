#include "Rest.hpp"
#include "Instrucciones.hpp"
#include <cstdio>

Rest::Rest() {}

Rest::Rest(Registro a, Registro b) : Instruction("Rest", 22, 3) {
	num1 = a.getData();
	num2 = b.getData();
}

void Rest::setNum1(int a) {
	num1 = a;
}

int Rest::getNum1() {
	return num1;
}

void Rest::setNum2(int a) {
	num2 = a;
}

int Rest::getNum2() {
	return num2;
}