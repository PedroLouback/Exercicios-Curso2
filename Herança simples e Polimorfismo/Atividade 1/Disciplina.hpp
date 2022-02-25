#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Professor.hpp"

using namespace std;

class Disciplina  
{
	private:

	string nome;
	int CH;
	Professor professor;
	
	public:

		Disciplina();
		Disciplina(string nome, int CH, Professor professor);

		//Gets
		string getNome();
		int getCH();
		Professor getProfessor();

		//Sets 
		void setNome(string nome);
		void setCH(int CH);
		void setProfessor(Professor professor);


};
#endif