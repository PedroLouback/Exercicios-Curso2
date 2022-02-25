#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Pessoa.hpp"

using namespace std;

class Professor : public Pessoa
{
private:

	string curso;
	string titulacao;

public:

	Professor();
	Professor(string curso, string titulacao, string n, string e, char cpf[11]);

	//Gets
	string getCurso();
	string getTitulacao();

	//Sets
	void setCurso(string curso);
	void setTitulacao(string titulacao);

};
#endif