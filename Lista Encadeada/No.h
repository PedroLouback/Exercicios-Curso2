#ifndef NO_H
#define NO_H
#include <iostream>
#include "No.h"

using namespace std;

class No
{
private:
	int v;
	No* prox;

public:
	No(int v);
	int obterValor();

	No* obterProx();

	void setProx(No* p);
};

#endif