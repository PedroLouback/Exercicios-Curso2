#include <iostream>
#include "Paciente.h"
#include "Consultorio.h"
#include <windows.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);
    char sexo, escolha;
    string nome, endereco, nome_consultorio;
    int cpf;
    string telefone;
    Paciente p;
    Consultorio c;

    cout << "Informe o nome do consultorio: ";
    getline(cin, nome_consultorio);
    cout << "\n";

    while (1) { 
        cout << "\n|-------------------- > PROGRAMA DE CADASTRO < -----------------------|";
        cout << "\n|   Selecione uma das alternativas abaixos conforme sua descrição!    |";
        cout << "\n|a. Cadastrar médico;                                                 |";
        cout << "\n|b. Cadastrar paciente;                                               |";
        cout << "\n|c. Mostrar dados da última pessoa cadastrada                         |";
        cout << "\n|d. Remover cadastro de paciente;                                     |";
        cout << "\n|e. Visualizar todos os cadastros;                                    |";
        cout << "\n|f. Para encerrar o programa;                                         |";
        cout << "\n|---------------------------------------------------------------------|";
        cout << ("\n\nInforme a opção em que deseja fazer: ");
        cin >> escolha;

        switch (escolha) {
            case 'a':
                cout << "\nInforme o nome do médico: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Informe o endereço do médico: ";
                cin.ignore();
                getline(cin, endereco);
                cout << "Informe o telefone do médico: ";
                getline(cin, telefone);
                c.setNome(nome);
                c.setEndereco(endereco);
                c.setTelefone(telefone);
                c.setMedico(p);
                break;

            case 'b':
                cout << "\nInforme o nome do paciente: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Informe o sexo do paciente - (M - Masculino), (F - Feminino) e (I - Indefinido): ";
                cin >> sexo;
                cout << "Informe o CPF do paciente: ";
                cin >> cpf;
                cout << "Informe o endereço do paciente: ";
                cin.ignore();
                getline(cin, endereco);

                p.setNome(nome);
                p.setCpf(cpf);
                p.setSexo(sexo);
                p.setEndereco(endereco);

                c.cadastrarPaciente(p);
                break;

            case 'c':
                p.Imprimir();
                cout << "\n";
                break;

            case 'd':
                cout << "\nInforme o CPF do paciente que deseja remover: ";
                cin >> cpf;
                c.removerPaciente(cpf);
                break;

            case 'e':
                cout << "\n  || LISTA DE PACIENTES DO CONSULTORIO " << nome_consultorio << " ||";
                cout << "\n";
                c.imprimirListaDeTodosOsPacientes();
                break;

            case 'f':
                cout << "\nPrograma encerrado com sucesso!";
                return 0;

            default:
                cout << "\nOpção inválida!";
                break;
        }

    }

}

