#include "Carro.hpp" 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
	
void Carro::setModelo(string modelo){
    this->modelo = modelo;
}
string Carro::getModelo(){
    return modelo;
}

void Carro::setFabricante(string fabricante){
    this->fabricante = fabricante;
}
string Carro::getFabricante(){
    return fabricante;
}

void Carro::setCombustivel(float combustivel){
    this->combustivel = combustivel;
}
float Carro::getCombustivel(){
    return combustivel;
}

void Carro::setTotal(float total){
    this->total = total;
}
float Carro::getTotal()
{
    return total;
}

void Carro::setDistancia(float distancia){
    this->distancia = distancia;
}
float Carro::getDistancia(){
    return distancia;
}

void Carro::setConsumo(float consumo){
    this->consumo = consumo;
}
float Carro::getConsumo(){
    return consumo;
}

void Carro::Abastecer(float combustivel_abastecido, int i, vector <Carro> vetCarro)
{
        
        if ((vetCarro[i].getCombustivel() + combustivel_abastecido) > 50)
        {
            cout << "ERRO: Limite de combustivel ultrapassado!!";

        }else {
            vetCarro[i].setCombustivel(vetCarro[i].getCombustivel() + combustivel_abastecido);
            vetCarro[i].setDistancia(0);
        }
        
}

void Carro::Mover(int i, float distancia, vector <Carro> vetCarro)
{
            if (vetCarro[i].getCombustivel() < (distancia / vetCarro[i].getConsumo())){
                cout << "Combustivel Insuficiente para andar " << vetCarro[i].getDistancia() << " Km!";
            }
            else 
            {
                vetCarro[i].setTotal(vetCarro[i].getDistancia() + distancia);
                vetCarro[i].setDistancia(vetCarro[i].getDistancia() + distancia);
                vetCarro[i].setCombustivel(vetCarro[i].getCombustivel() - (distancia / vetCarro[i].getConsumo()));
            }
}

void Carro::Imprimir(int i, string carro, int count, vector <Carro> vetCarro)
{
    cout << "\n     ||Carro " << vetCarro[i].getModelo() << " ||     ";
    cout << "\nQntd de combustivel no tanque: " << vetCarro[i].getCombustivel() << " litros";
    cout << "\nModelo do veiculo: " << vetCarro[i].getModelo() << endl;
    cout << "Fabricante: " << vetCarro[i].getFabricante() << endl;
    cout << "Distancia total: " << vetCarro[i].getTotal() << "km/l.";
    cout << "\n\n";
}