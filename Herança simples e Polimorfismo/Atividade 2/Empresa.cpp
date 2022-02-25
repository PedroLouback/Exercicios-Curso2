#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Empresa.hpp"



void Empresa::setVetCaixaAgencia(vector <CaixaAgencia> vetCaixaAgencia)
{
    this->vetCaixaAgencia = vetCaixaAgencia;
}

void Empresa::setVetGerente(vector <Gerente> vetGerente)
{
    this->vetGerente = vetGerente;
}

Empresa::Empresa()
{	
}

Empresa::Empresa(string nome)
{
    this->nome = nome;
}

// Get
string Empresa::getNome()
{
    return nome;
}

// Sets
void Empresa::setNome(string nome)
{
    this->nome = nome;
}

CaixaAgencia Empresa::cadastrarCaixa(CaixaAgencia c)
{
    vetCaixaAgencia.push_back(c);
    cout << "\nCaixa cadastrado com sucesso!";
    cout << "\n";
    return c;
}


//USADA PARA TESTE
void Empresa::Imprimir()
{   
    for (int i = 0; i < vetGerente.size(); i++)
    {
        cout << "Nome: " << vetGerente[i].getNome() << endl;
        cout << "CPF: " << vetGerente[i].getCpf() << endl;
        cout << "Salario: " << vetGerente[i].getSalario() << endl;
        cout << "Data de Admissão: " << vetGerente[i].getDataDeAdmissao() << endl;
        cout << "Função: " << vetGerente[i].getFuncao() << endl;
        cout << "Bônus: " << vetGerente[i].getBonus() << endl;
    }
}


CaixaAgencia Empresa::removerCaixa(CaixaAgencia c, string nome)
{
    int i, verificacao=0;

    for (i = 0; i < vetCaixaAgencia.size(); i++){
        if(vetCaixaAgencia[i].getNome()==nome){
            vetCaixaAgencia.erase(vetCaixaAgencia.begin() + i);
            cout << "\nCaixa com o nome "<< nome << " foi removido com sucesso!\n";
            cout << "\n";
            verificacao++;
            return c;
            break;
        }
    }

    if (verificacao==0){
        cout << "\nNão foi encontrado nenhum funcionário do caixa com o nome " << nome << "!";
        return c;
    }
}

Gerente Empresa::cadastrarGerente(Gerente g)
{
    vetGerente.push_back(g);
    cout << "\nGerente cadastrado com sucesso!";
    cout << "\n";
    return g;
}

Gerente Empresa::removerGerente(Gerente g, string nome)
{
    int i, verificacao = 0;

    for (i = 0; i < vetGerente.size(); i++)
    {
        if (vetGerente[i].getNome() == nome)
        {
            vetGerente.erase(vetGerente.begin() + i);
            cout << "\nO gerente " << nome << " foi removido com sucesso!\n";
            cout << "\n";
            verificacao++;
            return g;
            break;
        }
    }

    if (verificacao == 0)
    {
        cout << "\nNão foi encontrado nenhum gerente com o nome " << nome << "!";
        cout << "\n";
        return g;
    }
}

Gerente Empresa::cadastrarBonusGerente(Gerente g, float bonus, string nome)
{
    int i, verificacao = 0;

    for (i = 0; i < vetGerente.size(); i++)
    {
        if (vetGerente[i].getNome() == nome)
        {   
            if(vetGerente[i].getBonus() > 1){
                cout << "\nAVISO: Você ALTEROU o bônus do gerente "<< nome << endl;
            }
            cout << "\nBônus de R$" << bonus << " concedido com sucesso para o gerente " << vetGerente[i].getNome() << endl;
            bonus += vetGerente[i].getBonus();
            vetGerente[i].setBonus(bonus);
            cout << "Bônus atual: R$"<< vetGerente[i].getBonus() << endl;
            verificacao++;
            return g;
            break;
        }
    }

    if (verificacao == 0)
    {
        cout << "\nNão foi encontrado nenhum gerente com o nome " << nome << "!";
        cout << "\n";
        return g;
    }
}
Gerente Empresa::removerBonusGerente(Gerente g, string nome)
{
    int i, verificacao = 0;

    for (i = 0; i < vetGerente.size(); i++)
    {
        if (vetGerente[i].getNome() == nome)
        {
            if (vetGerente[i].getBonus() > 1){
                vetGerente[i].setBonus(0);
                cout << "\nBônus do gerente "<< nome << " removido com sucesso!";
                cout << "\n";
                verificacao++;
                return g;
                break;
            }else{
                cout << "\nERRO: Gerente não possui bônus para remover!";
                verificacao++;
                return g;
            }
        }
    }

    if (verificacao == 0)
    {
        cout << "\nNão foi encontrado nenhum gerente com o nome " << nome << "!";
        cout << "\n";
        return g;
    }
}

CaixaAgencia Empresa::cadastrarBonusCaixa(CaixaAgencia c, float bonus, string nome)
{
    int i, verificacao = 0;

    for (i = 0; i < vetCaixaAgencia.size(); i++)
    {
        if (vetCaixaAgencia[i].getNome() == nome)
        {
            if (vetCaixaAgencia[i].getBonus() > 1)
            {
                cout << "\nAVISO: Você ALTEROU o bônus do caixa " << nome << endl;
            }
            cout << "\nBônus de R$" << bonus << " concedido com sucesso para o caixa " << vetCaixaAgencia[i].getNome() << endl;
            bonus += vetCaixaAgencia[i].getBonus();
            vetCaixaAgencia[i].setBonus(bonus);
            cout << "Bônus atual: R$" << vetCaixaAgencia[i].getBonus() << endl;
            verificacao++;
            return c;
            break;
        }
    }

    if (verificacao == 0)
    {
        cout << "\nNão foi encontrado nenhum caixa com o nome " << nome << "!";
        cout << "\n";
        return c;
    }
}
CaixaAgencia Empresa::removerBonusCaixa(CaixaAgencia c, string nome)
{
    int i, verificacao = 0;

    for (i = 0; i < vetCaixaAgencia.size(); i++)
    {
        if (vetCaixaAgencia[i].getNome() == nome)
        {
            if (vetCaixaAgencia[i].getBonus() > 1)
            {
                vetCaixaAgencia[i].setBonus(0);
                cout << "\nBônus do caixa " << nome << " removido com sucesso!";
                cout << "\n";
                verificacao++;
                return c;
                break;
            }
            else
            {
                cout << "\nERRO: O caixa não possui bônus para remover!";
                verificacao++;
                return c;
            }
        }
    }

    if (verificacao == 0)
    {
        cout << "\nNão foi encontrado nenhum caixa com o nome " << nome << "!";
        cout << "\n";
        return c;
    }
}