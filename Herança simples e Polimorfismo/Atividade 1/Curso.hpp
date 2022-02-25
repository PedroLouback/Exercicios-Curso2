#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Professor.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "Aluno.hpp"

using namespace std;

class Curso  
{
	private:
		string nome;
		vector <Professor> vetProfessor;
		vector <Aluno> vetAluno;
		vector <Disciplina> vetDisciplina;
	public:

		Curso();
		Curso(string nome);

		//Get
		string getNome();

		//Sets
		void setNome(string nome);
		void setVetAluno(vector <Aluno> vetAluno);
		void setVetProfessor(vector <Professor> vetProfessor);
		void setVetDisciplina(vector <Disciplina> vetDisciplina);

		//Metodos
		void cadastrarProfessor(Professor p);
		void cadastrarAluno(Aluno a);
		void cadastrarDisciplina(Disciplina d);
		void ImprimirListaDeProfessor();
		void ImprimirListaDeAluno();
		Aluno AtualizaAluno(Aluno a, int matricula);
		Aluno VerificaAluno(int matricula);
		Professor VerificaProfessor(string nome);
		Disciplina VerificaDisciplina(string nome);
};
#endif