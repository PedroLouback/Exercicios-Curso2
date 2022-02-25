#ifndef __CONSULTORIO_H
#define __CONSULTORIO_H
#include <vector>
#include <string>
#include <iostream>
#include "Paciente.h"
using namespace std;
class Consultorio
{
private:
	string nome;
	string endereco;
	string telefone;
	Paciente medico;
	vector <Paciente> vet;

public:

	void cadastrarPaciente(Paciente p);
	bool removerPaciente(int cpf);
	void imprimirListaDeTodosOsPacientes();
	Consultorio();
	void setNome(string nome);
	string getNome();

	void setEndereco(string endereco);
	string getEndereco();

	void setTelefone(string telefone);
	string getTelefone();

	void setMedico(Paciente medico);
	Paciente getMedico();

	void setVetPacientes(vector <Paciente> vet);
};
#endif
