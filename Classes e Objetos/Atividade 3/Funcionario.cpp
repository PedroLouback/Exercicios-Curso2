#include "Funcionario.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Funcionario::setDepartamento(string departamento){
	this->departamento = departamento;
}
string Funcionario::getDepartamento(){
	return departamento;
}

void Funcionario::setData_de_Entrada(string data_de_entrada){
	this->data_de_entrada = data_de_entrada;
}
string Funcionario::getData_de_Entrada(){
	return data_de_entrada;
}

void Funcionario::setRG(string rg){
	this->rg = rg;
}
string Funcionario::getRG(){
	return rg;
}

void Funcionario::setSalario(double salario){
	this->salario = salario;
}
double Funcionario::getSalario(){
	return salario;
}

void Funcionario::setIdentificador(int identificador){
	this->identificador = identificador;
}
int Funcionario::getIdentificador(){
	return identificador;
}

void Funcionario::RecebeAumento(double aumento_salario, double *salario, vector <Funcionario> vetFuncionario, int i){
	
	cout<<"\nAumento de R$" << aumento_salario <<  " concebido com sucesso!";
	salario[i] = vetFuncionario[i].getSalario() + aumento_salario;
	cout<<"\nSalario atual: R$" << salario[i] << endl;
}

void Funcionario::calculaGanhoAnual(double ganho_anual, vector <Funcionario> vetFuncionario, int i, double *salario){
	 
	ganho_anual= (salario[i]*13+(salario[i]/3));
	cout<<"\n\nO ganho anual do funcionario " << vetFuncionario[i].getIdentificador() << " eh de R$" << ganho_anual << endl;
	cout<<"\n\n";
}
