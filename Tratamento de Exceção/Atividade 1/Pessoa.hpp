#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Pessoa
{
private:

	string nome;
	string endereco;
	char cpf[11];

public:

	Pessoa();
	Pessoa(string n, string e, char cpf[11]);

	//Gets
	string getNome();
	string getEndereco();
	char getCpf();

	//Sets
	void setNome(string nome);
	void setEndereco(string endereco);
	void setCpf(char cpf[11]);

};
#endif