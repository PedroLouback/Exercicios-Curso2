#include <iostream>
#include <string>
#include <windows.h>
#include "Pessoa.hpp"
#include "Pessoa.cpp"
#include "Aluno.hpp"
#include "Aluno.cpp"
#include "Professor.hpp"
#include "Professor.cpp"
#include "Disciplina.hpp"
#include "Disciplina.cpp"
#include "Curso.hpp"
#include "Curso.cpp"

using namespace std;

/*1.Implemente, em c++, as classes acima. O sistema deve possuir um main que possua as seguintes opções:
a.	Preencher dados do curso
b.	Cadastrar Professor
c.	Cadastrar Aluno
d.	Associar aluno a disciplinas
e.	Retirar aluno de disciplina
f.	Cadastrar disciplina
g.	Imprimir lista de professores do curso
h.	Imprimir lista de alunos de um curso*/

int main() {

    SetConsoleOutputCP(65001);
    Aluno a;
    Professor p;
    Disciplina d;
    Curso c;
    char escolha;
    string nome, titulacao, endereco, curso, materia;
    int CH, matricula, qtd_materias, i, cont, j, verificacao=0;
    vector <Professor> vetProfessor;
    vector <Aluno> vetAluno;
    vector <Disciplina> vetDisciplina;
    Curso();
    Aluno();
    Disciplina();
    Pessoa();

    while (1)
    {
        cout << "\n|-------------------- > PROGRAMA DE CADASTRO < -----------------------|";
        cout << "\n|   Selecione uma das alternativas abaixos conforme sua descrição!    |";
        cout << "\n|a. Preencher dados do curso;                                         |";
        cout << "\n|b. Cadastrar professor;                                              |";
        cout << "\n|c. Cadastrar aluno;                                                  |";
        cout << "\n|d. Associar aluno a disciplinas;                                     |";
        cout << "\n|e. Retirar aluno de disciplinas;                                     |";
        cout << "\n|f. Cadastrar disciplina;                                             |";
        cout << "\n|g. Imprimir lista de professores do curso;                           |";
        cout << "\n|h. Imprimir lista de alunos de um curso;                             |";
        cout << "\n|i. Para encerrar o programa;                                         |";
        cout << "\n|---------------------------------------------------------------------|";

        cout << ("\n\nInforme a opção em que deseja fazer: ");
        cin >> escolha;

        switch (escolha)
        {
        case 'a':
            cout << "\nInforme o nome do curso: ";
            cin.ignore();
            getline(cin, curso);
            c.setNome(nome);
            p.setCurso(curso);
            cout << "Informe o nome de um professor: ";
            getline(cin, nome);
            p.setNome(nome);
            cout << "Informe o endereço do professor: ";
            getline(cin, endereco);
            p.setEndereco(endereco);
            cout << "Informe a titulação do professor " << nome << ": ";
            getline(cin, titulacao);
            p.setTitulacao(titulacao);
            c.cadastrarProfessor(p);
        
            cout << "Informe o nome da disciplina dada por este professor: ";
            cin.ignore();
            getline(cin, nome);
            d.setNome(nome);

            cout << "Informe a carga horária da disciplina: ";
            cin >> CH;
            d.setCH(CH);
            d.setProfessor(p);
            c.cadastrarDisciplina(d);
            verificacao++;
            cout << "\nCurso cadastrado com sucesso!!";
            break;

        case 'b':
            if (verificacao == 0)
            {
                cout << "\nERRO:Necessário ter um curso cadastrado para cadastrar um professor!";
                break;
            }
            cout << "\nInforme o nome do professor: ";
            cin.ignore();
            getline(cin, nome);
            p.setNome(nome);
            cout << "Informe o endereço deste professor: ";
            getline(cin, endereco);
            p.setEndereco(endereco);
            cout << "Informe a titulação deste professor: ";
            getline(cin, titulacao);
            p.setTitulacao(titulacao);
            cout << "Informe o curso em que o professor da aula: ";
            getline(cin, curso);
            p.setCurso(curso);
            c.cadastrarProfessor(p);
            break;

        case 'c':
            if (verificacao == 0)
            {
                cout << "\nERRO:Necessário ter um curso cadastrado para cadastrar um aluno!";
                break;
            }
            cout << "\nInforme o nome do aluno: ";
            cin.ignore();
            getline(cin, nome);
            a.setNome(nome);
            cout << "Informe o endereço desse aluno: ";
            getline(cin, endereco);
            a.setEndereco(endereco);
            cout << "Informe a matrícula desse aluno: ";
            cin >> matricula;
            a.setMatricula(matricula);
            c.cadastrarAluno(a);
            break;

        case 'd':
            
            cout << "\nInforme a matricula do aluno que deseja associar a uma materia: ";
            cin.ignore();
            cin >> matricula;
            a=c.VerificaAluno(matricula);
        
            cout << "Informe o nome da materia que deseja associar ao aluno com matricula " << matricula << ": ";
            cin.ignore();
            getline(cin, materia);
            d=c.VerificaDisciplina(materia);

            a.AssociarMateria(d, matricula, materia);

            c.AtualizaAluno(a, matricula)=a;
            break;
        
        case 'e':
            cout << "\nInforme a matricula do aluno que deseja associar a uma materia: ";
            cin >> matricula;
            a = c.VerificaAluno(matricula);
            cout << "Informe o nome da matéria que deseja remover do aluno " << matricula << ": ";
            cin.ignore();
            getline(cin, materia);
            d=c.VerificaDisciplina(materia);

            a.RemoverMateria(d, matricula, materia);
            c.AtualizaAluno(a, matricula)=a;

            break;
        case 'f':
            if (verificacao == 0)
            {
                cout << "\nERRO:Necessário ter um curso cadastrado para cadastrar uma disciplina!";
                break;
            }
            cout << "\nInforme o nome da disciplina que deseja cadastrar: ";
            cin.ignore();
            getline(cin, nome);
            d.setNome(nome);
            cout << "Informe a carga horária da disciplina: ";
            cin >> CH;
            d.setCH(CH);
            cout << "Informe o nome do professor que da aula nesta disciplina: ";
            cin.ignore();
            getline(cin, nome);
            c.VerificaProfessor(nome);
            p.setNome(nome);
            d.setProfessor(p);
            c.cadastrarDisciplina(d);
            break;

        case 'g':
            cout << "|| LISTA DE PROFESSOR DO CURSO DE " << curso << " ||";
            cout << "\n";
            c.ImprimirListaDeProfessor();
            cout << "\n";
            break;

        case 'h':
            cout << "|| LISTA DE ALUNOS DO CURSO DE " << curso << " ||";
            cout << "\n";
            c.ImprimirListaDeAluno();
            cout << "\n";
            break;

        case 'i':
            cout << "\nVocê selecionou a opção de encerrar o programa!";
            cout << "\nENCERRANDO...";
            exit (1); 

        default:
            break;
            }
    }
        return 0;
    }