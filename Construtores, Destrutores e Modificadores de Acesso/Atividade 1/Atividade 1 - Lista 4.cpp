#include <iostream>
#include "Data.hpp"
using namespace std;

int main()
{
	int dia;
	int mes;
	int ano;

	while(1){
		cout << "\n\nInforme a dia da data que deseja verificar (dd): ";
		cin >> dia;
		cout << "Informe o mes da data que deseja verificar (mm): ";
		cin >> mes;
		cout << "Informe o ano da data que deseja verificar (aaaa): ";
		cin >> ano;

		Data t(dia, mes, ano);
	}
	

}

