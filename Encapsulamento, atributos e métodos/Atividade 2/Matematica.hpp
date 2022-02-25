#ifndef __MATEMATICA_HPP
#define __MATEMATICA_HPP
#include <math.h>
class Matematica
{
private:
	double num1;

public:
	
	void setNum1(double num1);
	double getNum1();
	
	double CalculaFatorial();
	double CalculaRaiz();
	double CalculaPotencia(int x);

};
#endif
