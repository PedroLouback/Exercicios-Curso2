#include <iostream>
#include <windows.h>
#include "Elevador.hpp"
#include "Elevador.cpp"
using namespace std;

int main() {
	SetConsoleOutputCP(65001);

	int capacidade_elevador, total_andares;
	char escolha;

	cout << "\nInforme a capacidade total do elevador: ";
	cin >> capacidade_elevador;
	cout << "\nInforme o total de andares no prédio: ";
	cin >> total_andares;
	Elevador e(capacidade_elevador, total_andares);

	while (1) {
		cout << "\n| |-  Menu de elevador do prédio  -| |\n";

		cout << "\na. Para acrescentar uma pessoa no elevador;";
		cout << "\nb. Para remover uma pessoa do elevador;";
		cout << "\nc. Para subir um andar;";
		cout << "\nd. Para descer um andar.";
		cout << "\ne. Para imprimir as informações do elevador,\n";
		cout << "\nSelecione uma das opções do elevador: ";
		cin >> escolha;
		if (escolha == 'a'){
			e.entra();
		}	
		if (escolha == 'b'){
			e.sai();
		}
		if (escolha == 'c'){
			e.sobe();
		}
		if (escolha == 'd'){
			e.desce();
		}
		if (escolha == 'e'){
			e.imprimir();
		}
	}

	
}