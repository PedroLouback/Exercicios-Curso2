#ifndef __ELEVADOR_HPP
#define __ELEVADOR_HPP
using namespace std;
class Elevador
{
private:
	int capacidade_elevador;
	int total_andares;
	int andar_atual;
	int pessoas_elevador;
	char escolha;

public:

	Elevador(int a, int b);

	void setCapacidade(int capacidade_elevador);
	int getCapacidade();

	void setTotalAndares(int total_andares);
	int getTotalAndares();

	void setAndar_Atual(int andar_atual);
	int getAndar_Atual();

	void setPessoas_Elevador(int pessoas_elevador);
	int getPessoas_Elevador();

	void entra();
	void sai();
	void sobe();
	void desce();
	void imprimir();

};

#endif 



