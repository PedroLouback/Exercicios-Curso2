#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Aluno.hpp"
using namespace std;



void Aluno::setVetDisciplina(vector <Disciplina> vetDisciplina) {
    this->vetDisciplina = vetDisciplina;
}

Aluno::Aluno()
{
    this->matricula=0;
}

Aluno::Aluno(int mat, string nome, string endereco) : Pessoa(nome, endereco)
{
	this->matricula = mat;

}

//Get
int Aluno::getMatricula()
{
    return matricula;
}

//Set
void Aluno::setMatricula(int mat)
{
    this->matricula = mat;
}

void Aluno::AssociarMateria(Disciplina d, int matricula, string materia)
{
    if (vetDisciplina.size() < 8){
        vetDisciplina.push_back(d);
        cout << "\nDisciplina " << materia << " associada com sucesso ao aluno com matricula " << matricula << endl;
    }
}

void Aluno::RemoverMateria(Disciplina d, int matricula, string materia)
{
    int validacao = 0;
    for (vector<Disciplina>::iterator it_disciplina = vetDisciplina.begin(); it_disciplina != vetDisciplina.end(); it_disciplina++)
    {
        if (it_disciplina->getNome() == materia)
        {
            validacao++;
            vetDisciplina.erase(it_disciplina);
            cout << "\nMateria " << materia << " removida do aluno com matricula "<< matricula << " com sucesso!";
            break;
        }
    }
    if (validacao == 0)
    {
        cout << "\nErro: Disciplina não encontrada com o aluno "<< matricula <<"!";
        exit(1);
    }
}