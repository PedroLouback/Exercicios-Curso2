#include <iostream>
#include "Carro.hpp"
#include "Carro.cpp"
#include <vector>
#include <string>
using namespace std;


/*Implemente uma classe chamada Carro. A classe deve possuir os atributos, modelo, fabricante, combustível 
(que armazena a quantidade de combustível no tanque), distância (que armazena a distância percorrida desde o abastecimento)
 e consumo. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. Deve-se criar os métodos get 
 (getters) e set (setters) para todos os atributos e o acesso a eles de dentro da função main deve ser feito apenas por 
 meio desses métodos. Em seguida, utilizando um Vector de carros, crie um menu que permita:
a. Inserir um carro;
b. Abastecer um determinado carro com certa quantidade de gasolina;
c. Mover um determinado carro com uma certa distância (em Km);
d. Retornar a quantidade de combustível, modelo, fabricante e a distância total percorrida por determinado carro;*/

int main() {

    int i=0, count=0;
    string carro_abastecido, carro_movido, carro;
    string modelo, fabricante;
    char escolha;
    float combustivel, distancia, consumo, combustivel_abastecido, medir_distancia;
    Carro c;
    vector <Carro> vetCarro;

    while (1)
    {
        cout << "     || MENU DE CADASTRO DE CARROS ||     \n\n";
        cout << "a. Inserir um carro;                       \n";
        cout << "b. Abastecer um determinado carro com certa quantidade de gasolina;\n";
        cout << "c. Mover um determinado carro com uma certa distancia (em Km);\n";
        cout << "d. Retornar a quantidade de combustivel, modelo, fabricante e a distancia total percorrida por determinado carro.\n\n";

        cout << "Informe a opcao escolhida: ";
        cin >> escolha; 

        switch (escolha)
        {
            case 'a':
                cout << "\nInforme o modelo do veiculo que deseja cadastrar: ";
                cin.ignore();
                getline(cin, modelo);
                cout << "Informe o fabricante desse veiculo: ";
                getline(cin, fabricante);
                cout << "Informe a quantidade de combustivel no tanque: ";
                cin >> combustivel;
                if (combustivel > 50)
                {
                    cout << "\nERRO: Quantidade de combustivel execede o limite de 50 litros";
                    cout << "\nInforme novamente a quantidade de combustivel no tanque: ";
                    cin >> combustivel;
                }
                cout << "Informe o consumo do veiculo (em km/l): ";
                cin >> consumo;
                cout << "\n";
                c.setModelo(modelo);
                c.setFabricante(fabricante);
                c.setCombustivel(combustivel);
                c.setConsumo(consumo);
                vetCarro.push_back(c);
                cout << "Carro numero -> " << count + 1 << " <- cadastrado sucesso!\n\n";
                cout << "\nCount antes de passar pela variavel: " << count << endl;
                count++;
                cout << "\nCount depois de passar pela variavel: " << count << endl;
                break;
            case 'b':
                cout << "Informe o nome do carro que deseja abastecer: ";
                cin.ignore();
                getline(cin, carro_abastecido);
                for (i = 0; i < count; i++)
                {
                    if (vetCarro[i].getModelo() == carro_abastecido)
                    {
                        cout << "Informe a quantidade que deseja abastecer no modelo " << vetCarro[i].getModelo() << ": ";
                        cin >> combustivel_abastecido;
                        vetCarro[i].Abastecer(combustivel_abastecido, i, vetCarro);
                    }
                }
                        break;
                    case 'c':
                        cout << "Informe o nome do carro que deseja mover: ";
                        cin.ignore();
                        getline(cin, carro_movido);
                        for (i = 0; i < count; i++)
                        {
                            if (vetCarro[i].getModelo() == carro_movido)
                            {
                                cout << "Informe a distancia (em km) que deseja mover o carro: ";
                                cin >> distancia;
                                vetCarro[i].Mover(i,distancia, vetCarro);
                            }
                        }
                        break;
                    case 'd':
                        cout << "Informe o nome do carro que deseja ver as informacoes: ";
                        cin.ignore();
                        getline(cin, carro);
                        for (i = 0; i < count; i++)
                        {
                            if (vetCarro[i].getModelo() == carro)
                            {
                                vetCarro[i].Imprimir(i, carro, count, vetCarro);
                            }
                        }

                        break;

                    default:
                        break;
                    }
                }

    return 0;
}