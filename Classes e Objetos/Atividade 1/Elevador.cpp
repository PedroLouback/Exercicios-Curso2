#include "Elevador.hpp"
#include <iostream>



Elevador::Elevador(int a, int b){
	this->capacidade_elevador = a;
	this->total_andares = b;
	this->andar_atual = 0;
	this->pessoas_elevador = 0;
}

void Elevador::setCapacidade(int capacidade_elevador) {
	this->capacidade_elevador = capacidade_elevador;
}
int Elevador::getCapacidade() {
	return capacidade_elevador;
}

void Elevador::setTotalAndares(int total_andares) {
	this->total_andares = total_andares;
}
int Elevador::getTotalAndares() {
	return total_andares;
}

void Elevador::setAndar_Atual(int andar_atual) {
	this->andar_atual = andar_atual;
}
int Elevador::getAndar_Atual() {
	return andar_atual;
}

void Elevador::setPessoas_Elevador(int pessoas_elevador) {
	this->pessoas_elevador = pessoas_elevador;
}
int Elevador::getPessoas_Elevador() {
	return pessoas_elevador;
}

void Elevador::entra() {

	if (this->pessoas_elevador < this->capacidade_elevador)
	{
		cout << "\nFoi acrescetada uma pessoas no elevador com sucesso!\n";
		this->pessoas_elevador++;
	}
	else if (this->pessoas_elevador == this->capacidade_elevador){
		cout << "Pessoas: " << this->pessoas_elevador << endl;
		cout << "\nCapacidade:" << this->capacidade_elevador;
		cout << "\nERRO: Máximo de pessoas atingido!";
	}
}

void Elevador::sai(){

	if (this->pessoas_elevador > 0)
	{
		cout << "\nFoi removida uma pessoa no elevador com sucesso!\n";
		this->pessoas_elevador--;
	}
	else if (this->pessoas_elevador == 0){
		cout << "\nERRO: Máximo de pessoas removidas atingido!";
	}
}

void Elevador::sobe() {

	if (this->andar_atual < this->total_andares)
	{
		this->andar_atual++;
		cout << "\n Andar atual: " << this->andar_atual << endl;
	}
	else if (this->andar_atual == this->total_andares){
		cout << "\nERRO: Andar mais alto atingido!";
	}
}

void Elevador::desce() {

	if (this->andar_atual > 0)
	{
		this->andar_atual--;
		cout << "\n Andar atual: " << this->andar_atual << endl;
	}
	else if (this->andar_atual == 0){
		cout << "\nERRO: Impossível descer, terreo atingido!";
	}
}

void Elevador::imprimir() {
	cout << "\nO andar atual é: " << this->andar_atual << endl;
	cout << "\nO total de andares é: " << this->total_andares << endl;
	cout << "\nA capacidade do elevador é: " << this->capacidade_elevador << endl;
	cout << "\nO total de pessoas no elevador é: " << this->pessoas_elevador << endl;
}

