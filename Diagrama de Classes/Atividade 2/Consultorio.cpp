#include "Consultorio.h"
#include <iostream> 
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void Consultorio::setVetPacientes(vector <Paciente> vet){
    this->vet = vet;
}

Consultorio::Consultorio() {
    
}

void Consultorio::cadastrarPaciente(Paciente p) {
    vet.push_back(p);
    cout << "\nCadastro feito com sucesso!";
}

bool Consultorio::removerPaciente(int cpf) {
    SetConsoleOutputCP(65001);
    int i;

    for ( i = 0; i < vet.size(); i++) {
        if (vet[i].getCpf() == cpf) {
            cout << "\nPaciente com o CPF " << vet[i].getCpf() << " foi descadastrado com sucesso!";
            vet.erase(vet.begin() + i);
        }
    }
    return 1;
}

void Consultorio::imprimirListaDeTodosOsPacientes() {
    SetConsoleOutputCP(65001);
    int i;
    for (i = 0; i < vet.size(); i++) {
        cout << "\nPACIENTE " << i + 1 << ":";
        cout << "\nNome: " << vet[i].getNome() << endl;
        cout << "Sexo: " << vet[i].getSexo() << endl;
        cout << "CPF: " << vet[i].getCpf() << endl;
        cout << "Endere�o: " << vet[i].getEndereco() << endl;
        cout << "\n";
    }
}

void Consultorio::setNome(string nome) {
    this->nome = nome;
}
string Consultorio::getNome() {
    return nome;
}

void Consultorio::setEndereco(string endereco) {
    this->endereco = endereco;
}
string Consultorio::getEndereco() {
    return endereco;
}

void Consultorio::setTelefone(string telefone) {
    this->telefone = telefone;
}
string Consultorio::getTelefone() {
    return telefone;
}

void Consultorio::setMedico(Paciente medico) {
    this->medico = medico;
}
Paciente Consultorio::getMedico() {
    return medico;
}

