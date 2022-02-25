#include <iostream>
#include <windows.h>
#include "Matematica.hpp"
#include "Matematica.cpp"
#include <math.h>

using namespace std;

/*Faça um programa que faz alguns cálculos matemáticos. O programa deve atender às 
seguintes especificações.
a. (0,25 pontos) Deve ser criada uma classe de nome Matematica
b. (0,25 pontos) Essa classe deve possuir um atributo do tipo double chamado num1
a. Crie o método get e set para o atributo
c. Crie um método de assinatura double calculaFatorial(), que calcula o fatorial do 
atributo da classe e retorna ele.
d. Crie um método de assinatura double calcularaiz(), que calcula a razia quadrada 
do atributo.
e. Crie um método de assinatura double calculapotencia(int x), que calcula eleva o 
atributo num1 à potência x.*/

int main()
{
    SetConsoleOutputCP(65001);

    double num1, calculafatorial, calcularaiz, calculapotencia;
    int x;
    char escolha;
    Matematica m;

    while (1) {
        cout << "a. Calcular o fatorial de um determinado número;";
        cout << "\nb. Calcular a raiz de um determinado número;";
        cout << "\nc. Calcular o potencia de um determinado número.";
        cout << "\nInforme a opção escolhida: ";
        cin >> escolha;

        switch (escolha)
        {
        case 'a':
            cout << "\nInforme o número que deseja fatorar: ";
            cin >> num1;
            m.setNum1(num1);
            m.CalculaFatorial();
            cout << m.CalculaFatorial();
            cout << "\n\n";
            break;

        case 'b':
            cout << "\nInforme o número que deseja ver a raiz: ";
            cin >> num1;
            m.setNum1(num1);
            m.CalculaRaiz();
            cout << m.CalculaRaiz();
            cout << "\n\n";
            break;

        case 'c':
            cout << "\nInforme o número que deseja ver a raiz: ";
            cin >> num1;
            cout << "Informe o número que deseja elevar o número " << num1 << ": ";
            cin >> x;
            m.setNum1(num1);
            m.CalculaPotencia(x);
            cout << m.CalculaPotencia(x);
            cout << "\n\n";
            break;
        default:
            return 0;
        }
    }


}