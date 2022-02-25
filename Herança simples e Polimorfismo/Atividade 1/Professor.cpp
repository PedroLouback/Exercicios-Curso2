#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Professor.hpp"  
	
Professor::Professor()
{	
}
	
Professor::Professor(string curso, string titulacao, string nome, string endereco) : Pessoa(nome, endereco)
{
	this->curso=curso;
    this->titulacao=titulacao;
}

//Gets
string Professor::getCurso(){
    return curso;
}
string Professor::getTitulacao(){
    return titulacao;
}

//Sets
void Professor::setCurso(string curso){
    this->curso=curso;
}
void Professor::setTitulacao(string titulacao){
    this->titulacao=titulacao;
}