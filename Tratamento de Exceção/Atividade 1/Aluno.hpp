#ifndef __ALUNO_HPP
#define __ALUNO_HPP
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Pessoa.hpp"
#include "Disciplina.hpp"

using namespace std;

class Aluno : public Pessoa
{
private:

	int matricula;
	vector <Disciplina> vetDisciplina;


public:
	Aluno();
	Aluno(int matricula, string nome, string endereco, char cpf[11]);

	//Gets
	int getMatricula();

	//Sets
	void setMatricula(int mat);
	void setVetDisciplina(vector <Disciplina> vetDisciplina);

	void AssociarMateria(Disciplina d, int matricula, string materia);
	void RemoverMateria(Disciplina d, int matricula, string materia);
};
#endif