#include <iostream>
#include <windows.h>
#include <math.h>
#include "Matematica.hpp"
#include "Matematica.cpp"
using namespace std;

/*Enunciado*/

int main() {

    SetConsoleOutputCP(65001);
    double num1, calculafatorial, seno;
    char escolha;
    Matematica m;

        while (1)
    {
        cout << "\n";
        cout << "a. Calcula o seno do número informado;";
        cout << "\nb. Calcula o coseno do número informado;";
        cout << "\nInforme a opção escolhida: ";
        cin >> escolha;

        switch (escolha)
        {
        case 'a':
            cout << "\nInforme um ângulo em graus: ";
            cin >> num1;
            m.setValorNum1(num1);
            m.sin();
            cout << "O seno do número informado é: " <<  m.sin() << endl;
            break;
        case 'b':
            cout << "\nInforme um ângulo em graus: ";
            cin >> num1;
            m.setValorNum1(num1);
            m.sin();
            cout << "O cosseno do número informado é: " << m.cos() << endl;
            break;

        default:
            break;
        }       
    }
    return 0;
}