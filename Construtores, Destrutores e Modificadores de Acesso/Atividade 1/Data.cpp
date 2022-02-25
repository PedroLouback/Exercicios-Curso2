#include "Data.hpp"

Data::Data(int d, int m, int a) {
	this->dia = d;
	this->mes = m;
	this->ano = a;

    if (ano >= 1900 && ano <= 9999)
    {
        
        if (mes >= 1 && mes <= 12)
        {
            
            if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
                cout << "\nData valida!";
				
			}
            else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
                cout << "\nData valida!";
				
			}
            else if ((dia >= 1 && dia <= 28) && (mes == 2)){
                cout << "\nData valida!";
				
			}
            else if (dia == 29 && mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))){
                cout << "\nData valida!";
				
			}
            else{
                cout << "\nDia invalido! Programa encerrado!!";
                system("PAUSE");
			}
        }
        else
        {
            cout << "\nMês invalido! Programa encerrado!!";
            system("PAUSE");
        }
    }
    else
    {
        cout << "\nAno invalido! Programa encerrado!!";
        	system("PAUSE");
    }
}
