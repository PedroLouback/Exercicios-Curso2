#ifndef __CARRO_HPP
#define __CARRO_HPP
#include <string>
using namespace std;
class Carro {
private:
    string modelo_carro, nome_motorista, fabricante_carro, motorizacao_carro;
    float quilometragem_inicial, quilometragem_final;

public:
    void setModelo(string modelo_carro);
    string getModelo();

    void setMotorizacao(string motorizacao_carro);
    string getMotorizacao();

    void setFabricante(string fabricante_carro);
    string getFabricante();

    void setNome(string nome_motorista);
    string getNome();

    void setQuilometragem_Inicial(float quilometragem_inicial);
    float getQuilometragem_Inicial();

    void setQuilometragem_Final(float quilometragem_final);
    float getQuilometragem_Final();

    void impressao_dados_corrida();

};
#endif