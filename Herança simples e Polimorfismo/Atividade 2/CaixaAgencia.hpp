#ifndef __CAIXAAGENCIA_HPP
#define __CAIXAAGENCIA_HPP
#include <iostream>
#include "Funcionario.hpp"
#include <windows.h>
#include <string>
#include <vector>
using namespace std;

class CaixaAgencia  :public Funcionario  
{
	private:
		string nivel;
		vector<CaixaAgencia> vetCaixaAgencia;

	public:

		CaixaAgencia();
		CaixaAgencia(string nivel, string n, string cpf, float s, string dataDeAdmissao, float bonus);

		//Get
		string getNivel();
		
		//Set
		void setNivel(string nivel);
		void setVetCaixaAgencia(vector<CaixaAgencia> VetCaixaAgencia);

		//Metodos
		
		
};
#endif