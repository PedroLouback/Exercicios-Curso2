#include "Paciente.h" 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Paciente::setNome(string nome) {
    this->nome = nome;
}
string Paciente::getNome() {
    return nome;
}

void Paciente::setSexo(char sexo) {
    this->sexo = sexo;
}
char Paciente::getSexo() {
    return sexo;
}

void Paciente::setCpf(int cpf) {
    this->cpf = cpf;
}
int Paciente::getCpf() {
    return cpf;
}

void Paciente::setEndereco(string endereco) {
    this->endereco = endereco;
}
string Paciente::getEndereco() {
    return endereco;
}

void Paciente::Imprimir() {
    cout << "\nNome: " << this->nome;
    cout << "\nSexo: " << this->sexo;
    cout << "\nCPF: " << this->cpf;
    cout << "\nEndereço: " << this->endereco;

}