#include <iostream>
#include "Funcionario.hpp"
#include "Funcionario.cpp"
#include <vector>
#include <string>

/* Crie um programa que armazena os dados de funcionários de uma empresa. O programa deve
possuir a classe Funcionário com atributos para representar o departamento onde trabalha
(String), seu salário (double), seu identificador (int), a data de entrada no banco (String) e
seu RG (String). Você deve criar alguns métodos de acordo com sua necessidade. Além deles,
crie um método recebeAumento que aumenta o salário de determinado funcionário de
acordo com o parâmetro passado como argumento. Crie também um método
calculaGanhoAnual, que recebe como parâmetro o identificador do funcionário e, em
seguida, retorna o valor do salário desse funcionário multiplicado por 12, somado ao 13º salário
e a 1/3 de férias. Em seguida, crie um main para testar a classe funcionário criada. Com o main
criado deve ser possível testar todos os métodos e atributos disponíveis. */

int main(int argc, char** argv) {
	
	string departamento, data_de_entrada, rg;
	double *salario=0, aumento_salario=0, ganho_anual=0;
	int identificador=0, escolha=0, num_funcionarios=0, verifica_identificacao=0, verifica_ganho_anual=0 ;
	Funcionario f;

	vector <Funcionario> vetFuncionario;

    cout << "Informe a quantidade de funcionarios que deseja cadastrar: ";
    cin >> num_funcionarios;

    salario = (double *) malloc (num_funcionarios);

    cin.ignore();
    for (int i = 0; i < num_funcionarios; i++){
        cout<<"\n         || Cadastro do funcionario " << i+1 <<" ||         \n";
        cout<<"Informe o departamento em que o funcionario trabalha: ";
        getline(cin, departamento);
        cout<<"Informe o salario do funcionario: R$";
        cin>>salario[i];
        cout<<"Informe o seu numero de identificacao: ";
        cin.ignore();
        cin>>identificador;
        cout<<"Informe a data de entrada no banco de funcionarios: ";
        cin.ignore();
        getline(cin, data_de_entrada);
        cout<<"Informe o RG do funcionario: ";
        getline(cin, rg);
        f.setDepartamento(departamento);
        f.setSalario(salario[i]);
        f.setIdentificador(identificador);
        f.setData_de_Entrada(data_de_entrada);
        f.setRG(rg);
        vetFuncionario.push_back(f);
    }

    
    while (1){
        cout<<"\n\nInsira (1) para aumentar o salario de um determinado funcionario;\nInsira (2) para ver o ganho anual de um determinado funcionario;\nInsira qualquer outro numero para encerrar o programa: ";
        cin>>escolha;
        if (escolha == 1)
        {
            cout<<"\nInforme o numero de indentificacao do funcionario que deseja dar aumento: ";
            cin>>verifica_identificacao;
            for (int i = 0; i < num_funcionarios; i++)
            {
                if(verifica_identificacao==vetFuncionario[i].getIdentificador()){
                cout<<"\nInforme o aumento do funcionario " << vetFuncionario[i].getIdentificador() << " em reais: R$";
	            cin>>aumento_salario;   
                f.RecebeAumento(aumento_salario, salario, vetFuncionario, i);
                }
            }
        }
        else if(escolha == 2)
        {
            cout<<"\nInforme o numero de indentificacao do funcionario que deseja ver o ganho anual: ";
            cin >>  verifica_ganho_anual;
            for (int i = 0; i < num_funcionarios; i++)
            {
                if(verifica_ganho_anual==vetFuncionario[i].getIdentificador()){
                    vetFuncionario[i].calculaGanhoAnual(ganho_anual, vetFuncionario, i, salario);
                }
            }
        }
        else if (escolha != 1 || escolha != 2){
            break;
        }
    }
    
		
	return 0;
}
