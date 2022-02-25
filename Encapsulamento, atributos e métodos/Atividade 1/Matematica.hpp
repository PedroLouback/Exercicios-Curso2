#ifndef __MATEMATICA_HPP
#define __MATEMATICA_HPP
#include <math.h>	
	
class Matematica  
{
	private:

	double num1;

	public:

	Matematica();
	void setValorNum1(double num1);
	double getValorNum1();
	double CalculaFatorial(double pote);
	double sin();
	double cos();
};
#endif