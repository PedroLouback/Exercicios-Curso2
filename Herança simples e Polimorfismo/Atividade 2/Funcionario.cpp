#include <iostream>
#include <windows.h>
#include <string>
#include "Funcionario.hpp"
	
Funcionario::Funcionario()
{
	this->bonus=0;
}
	
Funcionario::Funcionario(string n, string cpf, float s, string dataDeAdmissao, float bonus)
{
	this->nome=n;
    this->cpf=cpf;
    this->salario=s;
    this->dataDeAdmissao=dataDeAdmissao;
    this->bonus=bonus;
}

//Gets
string Funcionario::getNome(){
    return nome;
}
string Funcionario::getCpf(){
    return cpf;
}
float Funcionario::getSalario(){
    return salario;
}
string Funcionario::getDataDeAdmissao(){
    return dataDeAdmissao;
}
float Funcionario::getBonus(){
    return bonus;
}

//Sets
void Funcionario::setNome(string nome){
    this->nome=nome;
}
void Funcionario::setCpf(string cpf)
{
    this->cpf = cpf;
}
void Funcionario::setSalario(float salario){
    this->salario=salario;
}
void Funcionario::setDataDeAdmissao(string dataDeAdmissao){
    this->dataDeAdmissao=dataDeAdmissao;
}
void Funcionario::setBonus(float bonus){
    this->bonus=bonus;
}

