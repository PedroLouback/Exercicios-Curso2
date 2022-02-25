#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Curso.hpp"  
	
void Curso::setVetDisciplina(vector <Disciplina> vetDisciplina) {
	this->vetDisciplina = vetDisciplina;
}

void Curso::setVetProfessor(vector <Professor> vetProfessor) {
	this->vetProfessor = vetProfessor;
}

void Curso::setVetAluno(vector <Aluno> vetAluno) {
	this->vetAluno = vetAluno;
}

Curso::Curso()
{
	this->nome="";
}
	
Curso::Curso(string nome)
{
	this->nome = nome;
}

//Get
string Curso::getNome() {
	return nome;
}

//Sets
void Curso::setNome(string nome) {
	this->nome = nome;
}

//Metodos
void Curso::cadastrarProfessor(Professor p) { 
	vetProfessor.push_back(p);
	if (vetProfessor.size() > 1)
		cout << "\nProfessor cadastrado com sucesso!";
}
void Curso::cadastrarAluno(Aluno a) {
	vetAluno.push_back(a);
	cout << "\nAluno cadastrado com sucesso!";
}
void Curso::cadastrarDisciplina(Disciplina d) {
	if (vetDisciplina.size()<8){
		vetDisciplina.push_back(d);
	}else{
		cout << "ERRO: Máximo de 8 disciplinas cadastradas.";
		exit(1);
	}
	if (vetDisciplina.size() > 1)
		cout << "\nDisciplina cadastrada com sucesso!";
}
void Curso::ImprimirListaDeProfessor() {
	int i;
	for (i=0;i < vetProfessor.size(); i++){
		cout << "\nPROFESSOR " << i+1 << endl;
		cout << "Nome: " << vetProfessor[i].getNome() << endl;
		cout << "Endereço: " << vetProfessor[i].getEndereco() << endl;
		cout << "Titulação: " << vetProfessor[i].getTitulacao() << endl;
		cout << "Curso: " << vetProfessor[i].getCurso() << endl;
	} 
}
void Curso::ImprimirListaDeAluno() {
	int i;
	for (i = 0; i < vetAluno.size(); i++)
	{
		cout << "\nALUNO " << i + 1 << endl;
		cout << "Nome: " << vetAluno[i].getNome() << endl;
		cout << "Endereço: " << vetAluno[i].getEndereco() << endl;
		cout << "Matrícula: " << vetAluno[i].getMatricula() << endl;
	}
}

Aluno Curso::VerificaAluno(int matricula)
{
	int validacao=0;
	for (vector<Aluno>::iterator it_aluno = vetAluno.begin();it_aluno != vetAluno.end(); it_aluno++)
	{
		if(it_aluno->getMatricula() == matricula){
			validacao++;
			return *it_aluno;
		}
	}

	if (validacao == 0){
		cout << "\nErro: Matrícula não encontrada!";
		exit(1);
	}
}
Professor Curso::VerificaProfessor(string nome)
{
	int i,j;
	for (i = 0; i < vetProfessor.size(); i++)
	{
		if (vetProfessor[i].getNome() == nome)
		{
			return vetProfessor[i];
		}
	}
	for (j = 0; j < vetProfessor.size(); j++)
	{
		if (vetProfessor[j].getNome() != nome)
		{
			cout << "\nErro: Professor não encontrado!";
			exit(1);
		}
	}
}

Disciplina Curso::VerificaDisciplina(string nome)
{
	int validacao = 0;
	for (vector<Disciplina>::iterator it_disciplina = vetDisciplina.begin(); it_disciplina != vetDisciplina.end(); it_disciplina++)
	{
		if (it_disciplina->getNome() == nome)
		{
			validacao++;
			return *it_disciplina;
		}
	}

	if (validacao == 0)
	{
		cout << "\nErro: Disciplina não encontrada!";
		exit(1);
	}
}

Aluno Curso::AtualizaAluno(Aluno a, int matricula){
		int i;
		for (i=0;i<vetAluno.size();i++){
			if(vetAluno[i].getMatricula()==matricula){
				vetAluno.erase(vetAluno.begin()+i);
			}
		}
		vetAluno.push_back(a);
		return a;
}

