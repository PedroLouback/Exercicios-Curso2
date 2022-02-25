#include <iostream>
#include "No.h"

No::No(int v) // construtor
{
	this->v = v;
	this->prox = NULL;

}

int No::obterValor() // obt�m o valor
{
	return this->v;
}

No* No::obterProx() // obt�m o pr�ximo No
{
	return prox;
}

void No::setProx(No* p) // seta o pr�ximo No
{
	prox = p;
}