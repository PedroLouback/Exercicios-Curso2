#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include "CaixaAgencia.hpp" 



CaixaAgencia::CaixaAgencia(){
    
}
	
CaixaAgencia::CaixaAgencia(string nivel, string n, string cpf, float s, string dataDeAdmissao, float bonus) : Funcionario(n, cpf, s, dataDeAdmissao, bonus)
{
	this->nivel=nivel;
}

void CaixaAgencia::setVetCaixaAgencia(vector<CaixaAgencia> vetCaixaAgencia)
{
    this->vetCaixaAgencia = vetCaixaAgencia;
}

//Get	
string CaixaAgencia::getNivel(){
    return nivel;
}
//Set
void CaixaAgencia::setNivel(string nivel){
    this->nivel=nivel;
}

//Metodos
