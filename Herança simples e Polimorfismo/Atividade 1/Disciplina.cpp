#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Disciplina.hpp"

Disciplina::Disciplina()
{	
    this->CH=0;
}

Disciplina::Disciplina(string nome, int CH, Professor professor)
{
	this->nome= nome;
    this->CH = CH;
    this->professor = professor;
}

void Disciplina::setNome(string nome)
{
    this->nome = nome;
}

void Disciplina::setCH(int CH){
    this->CH = CH;
}

void Disciplina::setProfessor(Professor professor){
    this->professor=professor;
}

string Disciplina::getNome(){
    return nome;
}
int Disciplina::getCH(){
    return CH;
}
Professor Disciplina::getProfessor(){
    return professor;
}