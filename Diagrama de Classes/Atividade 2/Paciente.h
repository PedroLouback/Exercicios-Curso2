#ifndef __PACIENTE_H
#define __PACIENTE_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Paciente
{
private:

	char sexo;
	string nome;
	string endereco;
	int cpf;

public:

	void setNome(string nome);
	string getNome();

	void setSexo(char sexo);
	char getSexo();

	void setCpf(int cpf);
	int getCpf();

	void setEndereco(string endereco);
	string getEndereco();

	void Imprimir();

};
#endif

