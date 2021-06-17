#include "Add.hpp"
#include "Instrucciones.hpp"
#include <cstdio>

Add::Add() {}

Add::Add(Registro a, Registro b) : Instruction("ADD", 21, 3) {
	num1 = a.getData();
	num2 = b.getData();
}

void Add::setNum1(int a) {
	num1 = a;
}

int Add::getNum1() {
	return num1;
}

void Add::setNum2(int a) {
	num2 = a;
}

int Add::getNum2() {
	return num2;
}