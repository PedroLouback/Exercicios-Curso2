#ifndef __CARRO_HPP
#define __CARRO_HPP
#include <vector>
#include <string>
using namespace std;

class Carro  
{
	private:

	string modelo, fabricante;
	float combustivel, distancia, consumo, total=0, combustivel_abastecido;

	public:

	void setModelo(string modelo);
	string getModelo();

	void setFabricante(string fabricante);
	string getFabricante();

	void setCombustivel(float combustivel);
	float getCombustivel();

	void setDistancia(float distancia);
	float getDistancia();
	
	void setTotal(float total);
	float getTotal();

	void setConsumo(float consumo);
	float getConsumo();

	void Abastecer(float combustivel_abastecido, int i, vector <Carro> vetCarro);
	void Mover(int i, float distancia, vector <Carro> vetCarro);
	void Imprimir(int i, string carro, int count, vector <Carro> vetCarro);
};
#endif