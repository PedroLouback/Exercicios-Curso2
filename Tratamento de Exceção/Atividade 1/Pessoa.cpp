#include <iostream>
#include "Pessoa.hpp"
#include "ExcecaoCPFInvalido.h"


using namespace std;

Pessoa::Pessoa()
{
    this->endereco = "";
}

Pessoa::Pessoa(string n, string e, char cpf[11])
{
    this->nome = n;
    this->endereco = e;
    this->cpf[11] = cpf[11];
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
char Pessoa::getCpf() {
    return cpf[11];
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
void Pessoa::setCpf(char cpf[11]) {
    this->cpf[11] = cpf[11];
}