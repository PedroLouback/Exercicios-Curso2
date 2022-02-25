#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Disciplina.hpp"

Disciplina::Disciplina()
{
    this->CH = "";
}

Disciplina::Disciplina(string nome, string CH, Professor professor)
{
    this->nome = nome;
    this->CH = CH;
    this->professor = professor;
}

void Disciplina::setNome(string nome)
{
    this->nome = nome;
}

void Disciplina::setCH(string CH) {
    this->CH = CH;
}

void Disciplina::setProfessor(Professor professor) {
    this->professor = professor;
}

string Disciplina::getNome() {
    return nome;
}
string Disciplina::getCH() {
    return CH;
}
Professor Disciplina::getProfessor() {
    return professor;
}