#include <iostream>
#include "Pessoa.hpp"
using namespace std;
	
Pessoa::Pessoa()
{
	this->endereco="";
}
	
Pessoa::Pessoa(string n, string e)
{
	this->nome = n;
    this->endereco = e;
}

//Gets
string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getEndereco()
{
    return endereco;
}

//Sets
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setEndereco(string endereco)
{
    this->endereco = endereco;
}