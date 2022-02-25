#include "CaixaAgencia.hpp"
#include "CaixaAgencia.cpp"
#include "Gerente.hpp"
#include "Gerente.cpp"
#include "Funcionario.hpp"
#include "Funcionario.cpp"
#include "Empresa.hpp"
#include "Empresa.cpp"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*Implemente em C++ as classes correspondentes ao diagrama de classes
1.	Alterar Bônus para o gerente
2.	Alterar Bônus para o Caixa
3.	Cadastrar Caixa
4.	Remover Caixa
5.	Cadastrar Gerente
6.	Remover Gerente*/

int main() {

    SetConsoleOutputCP(CP_UTF8);
    CaixaAgencia c;
    Gerente g;
    Empresa e;
    int escolha=0, verificacao=0;
    string nome, cpf, dataDeAdmissao, nivel, funcao, empresa;
    float salario, bonus;
    Funcionario();

    cout << "\nInforme o nome da empresa: ";
    getline(cin, empresa);
    e.setNome(empresa);

    while (1)
    {
        cout << "\n|| PROGRAMA DE CADASTRO DA EMPRESA " << e.getNome() << " || ";
        cout << "\n";
        cout << "\n1. Alterar bônus para o gerente;                                                          ";
        cout << "\n2. Alterar bônus para o caixa;                                                            ";
        cout << "\n3. Cadastrar caixa;                                                                       ";
        cout << "\n4. Remover caixa;                                                                         ";
        cout << "\n5. Cadastrar gerente;                                                                     ";
        cout << "\n6. Remover gerente;                                                                       ";
        cout << "\n7. Para encerrar o programa.                                                              ";

        cout << ("\n\nInforme a opção em que deseja fazer: ");
        cin >> escolha;

        switch (escolha)
        {
            case 1:
                cout << "\nDigite (1) para cadastrar bônus ou digite (2) para remover o bônus do gerente: ";
                cin >> escolha;
                    switch (escolha){
                        case 1:
                            cout << "\nInforme o nome do gerente que deseja adicionar o bônus: ";
                            cin.ignore();
                            getline(cin, nome);
                            cout << "Informe o bônus que deseja adicionar para o gerente " << nome << " (em R$): R$";
                            cin >> bonus;
                            e.cadastrarBonusGerente(g,bonus, nome);
                            break;
                        case 2:
                            cout << "\nInforme o nome do gerente que deseja remover o bônus: ";
                            cin.ignore();
                            getline(cin, nome);
                            e.removerBonusGerente(g, nome);
                            verificacao++;
                            break;
                    }
                break;
            case 2:
                cout << "\nDigite (1) para cadastrar bônus ou digite (2) para remover o bônus do funcionário do caixa: ";
                cin >> escolha;
                switch (escolha)
                {
                case 1:
                    cout << "\nInforme o nome do caixa em que deseja adicionar o bônus: ";
                    cin.ignore();
                    getline(cin, nome);
                    cout << "Informe o bônus que deseja adicionar para o caixa " << nome << " (em R$): R$";
                    cin >> bonus;
                    e.cadastrarBonusCaixa(c, bonus, nome);
                    break;
                case 2:
                    cout << "\nInforme o nome do caixa que deseja remover o bônus: ";
                    cin.ignore();
                    getline(cin, nome);
                    e.removerBonusCaixa(c,nome);
                    break;
                }
                break;
            case 3:
                cout << "\nInforme o nome do funcionário presente no caixa: ";
                cin.ignore();
                getline(cin, nome);
                c.setNome(nome);
                cout << "Informe o CPF do funcionário presente no caixa: ";
                getline(cin, cpf);
                c.setCpf(cpf);
                cout << "Informe o salário do funcionário presente no caixa (em R$): R$";
                cin >> salario;
                c.setSalario(salario);
                cout << "Informe a data de admissão do funcionário presente no caixa: ";
                cin.ignore();
                getline(cin, dataDeAdmissao);
                c.setDataDeAdmissao(dataDeAdmissao);
                cout << "Informe o nível do funcionário do caixa: ";
                getline(cin, nivel);
                c.setNivel(nivel);
                e.cadastrarCaixa(c);
                break;
            case 4:
                cout << "\nInforme o nome do caixa em que deseja remover: ";
                cin.ignore();
                getline(cin, nome);
                e.removerCaixa(c, nome);
                break;
            case 5:
                cout << "\nInforme o nome do gerente: ";
                cin.ignore();
                getline(cin, nome);
                g.setNome(nome);
                cout << "Informe o CPF do gerente: ";
                getline(cin, cpf);
                g.setCpf(cpf);
                cout << "Informe o salário do gerente (em R$): R$";
                cin >> salario;
                g.setSalario(salario);
                cout << "Informe a data de admissão do gerente: ";
                cin.ignore();
                getline(cin, dataDeAdmissao);
                g.setDataDeAdmissao(dataDeAdmissao);
                cout << "Informe a função do gerente: ";;
                getline(cin,funcao);
                g.setFuncao(funcao);
                e.cadastrarGerente(g);
                break;
            case 6:
                cout << "\nInforme o nome do gerente que deseja remover: ";
                cin.ignore();
                getline(cin, nome);
                e.removerGerente(g, nome);
                break;
            case 7:
                cout << "\nOpção de encerramento escolhida!";
                cout << "\nENCERRANDO...";
                return 0;
            break;
        }
    }
}