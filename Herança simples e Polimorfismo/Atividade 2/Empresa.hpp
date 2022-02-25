#ifndef EMPRESA_H
#define EMPRESA_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "CaixaAgencia.hpp"
#include "Gerente.hpp"

using namespace std;

class Empresa  
{
	private:

		string nome;
		vector <CaixaAgencia> vetCaixaAgencia;
		vector <Gerente> vetGerente;

	public:
		Empresa();
		Empresa(string nome);

		string getNome();

		void setNome(string nome);
		void setVetCaixaAgencia(vector<CaixaAgencia> VetCaixaAgencia);
		void setVetGerente(vector<Gerente> vetGerente);

		CaixaAgencia cadastrarCaixa(CaixaAgencia ca);
		CaixaAgencia removerCaixa(CaixaAgencia c, string nome);
		CaixaAgencia cadastrarBonusCaixa(CaixaAgencia c, float bonus, string nome);
		CaixaAgencia removerBonusCaixa(CaixaAgencia c, string nome);
		Gerente cadastrarGerente(Gerente g);
		Gerente removerGerente(Gerente g, string nome);
		Gerente cadastrarBonusGerente(Gerente g, float bonus, string nome);
		Gerente removerBonusGerente(Gerente g, string nome);

		void Imprimir();
		
};
#endif