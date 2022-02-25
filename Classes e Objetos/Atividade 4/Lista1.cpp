#include <iostream>
#include <windows.h>
#include "Carro.hpp"
#include "Carro.cpp"

/*Utilizando como como exemplo o código da classe Pessoa visto em sala de aula,
crie um projeto para uma empresa de Taxi contendo uma classe corrida com:
Atributos:
• Modelo do Carro
• Motorização do Carro
• Fabricante do Veículo
• Nome do Motorista
• Quilometragem Inicial
• Quilometragem Final
Implemente os getters e setters de cada atributo.
Implemente o main para ler os dados do teclado e mostrar os dados de uma corrida com o
valor final a ser pago (considere R$ 3,75 por KM rodado).*/

int main() {
    SetConsoleOutputCP(65001);
    Carro c;
    string modelo_carro, nome_motorista, fabricante_carro, motorizacao_carro;
    int quilometragem_inicial, quilometragem_final;

    cout << "Informe o modelo do carro: ";
    getline(cin, modelo_carro);
    c.setModelo(modelo_carro);

    cout << "\nInforme a motorização do veículo (Ex: 1.0, 1.4, 1.6, ...): ";
    getline(cin, motorizacao_carro);
    c.setMotorizacao(motorizacao_carro);

    cout << "\nInforme o fabricante do veículo: ";
    getline(cin, fabricante_carro);
    c.setFabricante(fabricante_carro);

    cout << "\nInforme o nome do motorista do veículo: ";
    getline(cin, nome_motorista);
    c.setNome(nome_motorista);

    cout << "\nInforme a quilometragem inicial da corrida: ";
    cin >> quilometragem_inicial;
    c.setQuilometragem_Inicial(quilometragem_inicial);

    cout << "\nInforme a quilometragem final da corrida: ";
    cin >> quilometragem_final;
    c.setQuilometragem_Final(quilometragem_final);

    c.impressao_dados_corrida();
    return 0;
}
