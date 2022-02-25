#ifndef GERENTE_H
#define GERENTE_H
#include <iostream>
#include "Funcionario.hpp"
#include <windows.h>
#include <string>
#include <vector>
using namespace std;

class Gerente : public Funcionario 
{
	private:

	string funcao;
	public:

		Gerente();
		Gerente(string funcao, string n, string cpf, float s, string dataDeAdmissao, float bonus);

		//Get
		string getFuncao();

		//Set
		void setFuncao(string funcao);

		
};
#endif