#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include "No.h"
#include "Lista.h"
#include "No.cpp"
#include "Lista.cpp"

using namespace std;

int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Portuguese");


	Lista l1, l2;
	int valor_excluir, tam_vetor;
	char escolha;

	l1.inserir_final(rand() % 100);
	l1.inserir_final(rand() % 100);
	l1.inserir_final(rand() % 100);
	l1.inserir_final(rand() % 100);
	l1.inserir_final(rand() % 100);

	l2.inserir_final(rand() % 100);
	l2.inserir_final(rand() % 100);
	l2.inserir_final(rand() % 100);
	l2.inserir_final(rand() % 100);
	l2.inserir_final(rand() % 100);

	cout << "\n|| Os elementos da lista 1 s�o ||\n\n";
	l1.mostrarTodos();
	cout << "Possuindo um total de " << l1.size() << " elementos.\n";

	cout << "\n|| Os elementos da lista 2 s�o ||\n\n";
	l2.mostrarTodos();
	cout << "Possuindo um total de " << l2.size() << " elementos.\n";
	

	while (1) {
		cout << "\n|--------------------- > PROGRAMA DE LISTAS < ------------------------|";
		cout << "\n|   Selecione uma das alternativas abaixos conforme sua descri��o!    |";
		cout << "\n|a. Concatenar lista 2 com a lista 1;                                 |";
		cout << "\n|b. Ordenar a lista desejada;                                         |";
		cout << "\n|c. Exluir determinado valor possuente na lista;                      |";
		cout << "\n|d. Construir uma lista com um vetor de inteiros;                     |";
		cout << "\n|e. Para encerrar o programa;                                         |";
		cout << "\n|---------------------------------------------------------------------|";
		cout << ("\n\nInforme a op��o em que deseja fazer: ");
		cin >> escolha;


		switch (escolha) {
		case 'a':
			
			l1.listaConcatena(l1, l2);

			cout << "\nImprimindo todos os elementos da lista concatenada...\n\n";
			l1.mostrarTodos();

			cout << "Tamanho da lista 1 concatenada com a 2 � de " << l1.size() << " elementos.\n";
			break;

		case 'b':

			cout << "\nQual lista deseja ordenar?\n(1) para Lista 1 ou (2) para Lista 2: ";
			cin >> escolha;

			if (escolha == '1') {
				l1.ordena(l1);
				break;
			}
			else if (escolha == '2') {
				l2.ordena(l2);
				break;
			}

		case 'c': 

			cout << "\nInforme o valor que deseja excluir da lista: ";
			cin >> valor_excluir;

			if (l1.existe(valor_excluir) == true) {
				l1.removerValor(valor_excluir, l1);
				cout << "\nNova Lista 1:\n";
				l1.mostrarTodos();
				break;
			}
			else if (l2.existe(valor_excluir) == true) {
				l2.removerValor(valor_excluir, l2);
				cout << "\nNova Lista 2: \n";
				l2.mostrarTodos();
				break;
			}
			if (l1.existe(valor_excluir) || l1.existe(valor_excluir) == false){
				cout << "\nERRO:Valor n�o encontrado!\n";
				break;
			}

		case 'd':
			if (escolha == 'd') {

				Lista lv;
				int* vetor;

				cout << "\nInforme o tamanho da lista que deseja fazer: ";
				cin >> tam_vetor;

				vetor = (int*)malloc(tam_vetor * sizeof(int*));
				if (vetor == NULL) {
					cout << "Erro: Sem mem�ria\n";
					exit(1);
				}

				if (tam_vetor == 0) {
					cout << "\nTamanho informado � igual a 0, constituindo uma lista vazia!\n";
				}
				else {
					lv.listagemVetor(vetor, tam_vetor);
				}
				break;
			}

		case 'e':

			cout << "\nOp��o de encerramento escolhida!";
			cout << "\nENCERRANDO...";
			return 0;
		}
	}

	

	return 0;
}