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

	public:

		Pessoa();
		Pessoa(string n, string e);

		//Gets
		string getNome();
		string getEndereco();

		//Sets
		void setNome(string nome);
		void setEndereco(string endereco);

};
#endif