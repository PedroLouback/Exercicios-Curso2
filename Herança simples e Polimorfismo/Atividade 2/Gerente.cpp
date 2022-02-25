#include <iostream>
#include <windows.h>
#include <string>
#include "Gerente.hpp"


	
Gerente::Gerente()
{
}

Gerente::Gerente(string funcao, string n, string cpf, float s, string dataDeAdmissao, float bonus) : Funcionario(n,cpf,s,dataDeAdmissao,bonus)
{
	this->funcao=funcao;
}

//Get

string Gerente::getFuncao(){
    return funcao;
}

//Set

void Gerente::setFuncao(string funcao){
    this->funcao=funcao;
}

