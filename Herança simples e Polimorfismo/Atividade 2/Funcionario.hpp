#ifndef __FUNCIONARIO_HPP
#define __FUNCIONARIO_HPP
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
	
class Funcionario  
{
	private:

	string nome;
	string cpf;
	float salario;
	string dataDeAdmissao;
	float bonus;

	public:

		Funcionario();
		Funcionario(string nome, string cpf, float salario, string dataDeAdmissao, float bonus);

		//Gets
		string getNome();
		string getCpf();
		float getSalario();
		string getDataDeAdmissao();
		float getBonus();

		//Sets
		void setNome(string nome);
		void setCpf(string cpf);
		void setSalario(float salario);
		void setDataDeAdmissao(string dataDeAmissao);
		void setBonus(float bonus);

		//Métodos
		
};
#endif