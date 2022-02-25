#include "Matematica.hpp"
#include <math.h>
#include <iostream>

void Matematica::setNum1(double num1) {
	this->num1 = num1;
}
double Matematica::getNum1() {
	return num1;
}

double Matematica::CalculaFatorial() {
	int i = 0;
	double calculafatorial = 1;
	for (i = num1; i > 1; i--)
	{
		calculafatorial = calculafatorial * i;
	}
	return calculafatorial;
}

double Matematica::CalculaRaiz() {
	double calcularaiz;
	calcularaiz = sqrt(num1);
	return calcularaiz;
}

double Matematica::CalculaPotencia(int x) {
	double calculapotencia;
	calculapotencia = pow(num1, x);
	return calculapotencia;
}




