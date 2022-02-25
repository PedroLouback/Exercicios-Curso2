#include <iostream>
#include <windows.h>
#include "Carro.hpp"
using namespace std;

void Carro::setModelo(string modelo_carro) {
    this->modelo_carro = modelo_carro;
}
string Carro::getModelo() {
    return modelo_carro;
}

void Carro::setMotorizacao(string motorizacao_carro) {
    this->motorizacao_carro = motorizacao_carro;
}
string Carro::getMotorizacao() {
    return motorizacao_carro;
}

void Carro::setFabricante(string fabricante_carro) {
    this->fabricante_carro = fabricante_carro;
}
string Carro::getFabricante() {
    return this->fabricante_carro;
}

void Carro::setNome(string nome_motorista) {
    this->nome_motorista = nome_motorista;
}
string Carro::getNome() {
    return nome_motorista;
}

void Carro::setQuilometragem_Inicial(float quilometragem_inicial) {
    this->quilometragem_inicial = quilometragem_inicial;
}
float Carro::getQuilometragem_Inicial() {
    return quilometragem_inicial;
}

void Carro::setQuilometragem_Final(float quilometragem_final) {
    this->quilometragem_final = quilometragem_final;
}
float Carro::getQuilometragem_Final() {
    return this->quilometragem_final;
}

void Carro::impressao_dados_corrida() {
    SetConsoleOutputCP(65001);
    cout << "\n|-_-_-_-_-_| Dados da Corrida |-_-_-_-_-_|\n";

    cout << "\nModelo do ve�culo: " << modelo_carro << endl;
    cout << "\nMotoriza��o do ve�culo: " << motorizacao_carro << endl;
    cout << "\nFabricante do ve�culo: " << fabricante_carro << endl;
    cout << "\nNome do motorista: " << nome_motorista << endl;
    cout << "\nQuilometragem inicial da corrida: " << quilometragem_inicial << endl;
    cout << "\nQuilometragem final da corrida: " << quilometragem_final << endl;
    cout << "\nValor final a ser pago: R$" << (quilometragem_final - quilometragem_inicial) * 3.75 << endl;
}

