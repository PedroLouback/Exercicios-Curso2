#include "Matematica.hpp"
#include <iostream>
#include <math.h>
using namespace std;  
	

Matematica::Matematica()//Construtor
{
    this->num1 = 0;
}

void Matematica::setValorNum1(double num1)
{
    this->num1 = num1;
}
double Matematica::getValorNum1()
{
    return num1;
}

double Matematica::CalculaFatorial(double n)//Método p/ calcular fatorial
{
    int i = 0;
    double calculafatorial = 1;
    for (i = n; i > 1; i--)
    {
        calculafatorial = calculafatorial * i;
    }
    return calculafatorial;
}

double Matematica::sin(){ //Método p/ calcular seno
    double i = 1, pote = 1;
    double seno = 0;
    double rad=0;
    rad = num1 * M_PI / 180;
    while (i < 10)
    {
        seno += pow(-1, i) * pow(rad, pote) / CalculaFatorial(pote);
        pote += 2;
        i++;
    }
    return seno;
}

double Matematica::cos() //Método p/ calcular cosseno
{
    double i = 0, pote = 0;
    double cosseno = 0;
    double rad = 0;
    rad = num1 * M_PI / 180;
    while (i < 10)
    {
        cosseno += pow(-1, i) * pow(rad, pote) / CalculaFatorial(pote);
        pote += 2;
        i++;
    }
    return cosseno;
}
