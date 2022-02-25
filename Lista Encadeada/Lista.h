#ifndef LISTA_H
#define LISTA_H

using namespace std;

class Lista
{
private:
	No* cabeca; // primeiro elemento
	No* cauda; // ultimo elemento

public:
	Lista();

	Lista(int v);

	void mostrarTodos();

	bool vazia();

	void inserir_inicio(int v);

	// insere no final (semelhante a push_back da list)
	void inserir_final(int v);

	int size();

	bool existe(int v);

	void remover();

	void ordena(Lista l);

	void listaConcatena(Lista l1, Lista l2);

	void removerValor(int valor_excluir, Lista l);

	void listagemVetor(int* vetor, int tam_vetor);

};

#endif