#include <iostream>
#include <locale.h>
#include <assert.h>
#include "No.h"
#include "Lista.h"

Lista::Lista()
{
	// se n�o passar elemento, ent�o cabeca e cauda s�o NULL
	cabeca = NULL;
	cauda = NULL;
}

Lista::Lista(int v)
{
	// se passar elemento, ent�o cria novo No
	cabeca = new No(v);
	cauda = cabeca;
}

// mostra todos os elementos da lista
void Lista::mostrarTodos()
{
	setlocale(LC_ALL, "Portuguese");

	No* c = cabeca;

	if (vazia())
		cout << "A lista não possui elementos!\n";
	else
	{
		while (c) // percorre a lista
		{
			cout << c->obterValor() << endl;
			c = c->obterProx();
		}
		cout << endl;
	}
}

void Lista::ordena(Lista l) {

	setlocale(LC_ALL, "Portuguese");

	No* aux;
	No* c = l.cabeca;
	
	aux = (No*)malloc(sizeof(No));
	if (vazia())
		cout << "\nA lista não possui elementos!\n";
	else {
		while (c != NULL) {
			No* maior = c->obterProx();
			while (maior != NULL) {
				if (c->obterValor() > maior->obterValor()) {
					*aux = *c;
					*c = *maior;
					c->setProx(aux->obterProx());
					aux->setProx(maior->obterProx());
					*maior = *aux;
					maior->setProx(aux->obterProx());
				}
				maior = maior->obterProx();
			}
			c = c->obterProx();
		}
		cout << "\nLista ordenada com sucesso!\n";
		mostrarTodos();
	}

}

bool Lista::vazia() // verifica se a lista est� vazia
{
	return (cabeca == NULL);
}

// insere no in�cio (semelhante a push_front da list)
void Lista::inserir_inicio(int v)
{
	No* novo_no = new No(v);

	if (vazia())
	{
		cabeca = novo_no;
		cauda = novo_no;
	}
	else
	{
		novo_no->setProx(cabeca);
		cabeca = novo_no;
	}
}

// insere no final (semelhante a push_back)
void Lista::inserir_final(int v)
{
	No* novo_no = new No(v);

	if (vazia())
	{
		cabeca = novo_no;
		cauda = novo_no;
	}
	else
	{
		cauda->setProx(novo_no);
		cauda = novo_no;
	}
}

void Lista::listaConcatena(Lista l1, Lista l2){

	No* aux1;
	No* aux2;

	if(vazia()){
		l1.cabeca = l2.cabeca;
	}
	else {
		aux1 = l1.cauda;
		aux2 = l2.cabeca;
		aux1->setProx(aux2);
	}

	cout << "\nLista 2 concatenada com sucesso com a lista 1!\n";
}

// retorna o tamanho da lista
int Lista::size()
{
	if (vazia()) // se for vazia, ent� retorna 0
		return 0;

	No* c = cabeca;
	int tam = 0;

	// percorre a lista
	do
	{
		c = c->obterProx();
		tam++;
	} while (c);

	return tam;
}

// verifica se um elemento existe na lista
bool Lista::existe(int v)
{
	No* c = cabeca;

	while (c)
	{
		if (c->obterValor() == v)
			return true;
		c = c->obterProx();
	}
	return false;
}

// remove da lista, remo��o do final
void Lista::remover()
{
	if (!vazia())
	{
		// se houver s� 1 elemento
		if (cabeca->obterProx() == NULL)
			cabeca = NULL;
		else if (cabeca->obterProx()->obterProx() == NULL) // 2 elementos
			cabeca->setProx(NULL);
		else // > 2 elementos
		{
			No* ant_ant = cabeca;
			No* ant = cabeca->obterProx();
			No* corrente = cabeca->obterProx()->obterProx();

			while (corrente)
			{
				No* aux = ant;
				ant = corrente;
				ant_ant = aux;
				corrente = corrente->obterProx();
			}
			delete ant_ant->obterProx(); // libera memória
			ant_ant->setProx(NULL); // seta o prox como NULL
			cauda = ant_ant; // atualiza a cauda
		}
	}
}

void Lista::removerValor(int valor_excluir, Lista l) {
	No* ant_ant = cabeca;
	No* ant = cabeca->obterProx();

	if (ant_ant->obterValor() == valor_excluir) {
		cabeca = ant_ant->obterProx();
		ant_ant->obterProx() == NULL;
		cout << "\nO valor " << valor_excluir << " foi encontrado com sucesso e removido!\n";
	}

	while (ant != NULL && ant->obterValor() != valor_excluir)
	{
		ant_ant = ant;
		ant = ant->obterProx();
	}
	
	if (ant != NULL) {
		ant_ant->setProx(ant->obterProx());
		ant == NULL;
		cout << "\nO valor " << valor_excluir << " foi encontrado com sucesso e removido!\n";
	}
}

void Lista::listagemVetor(int* vetor, int tam_vetor) {

	for (int i = 0; i < tam_vetor; i++) {
		vetor[i] = (rand() % 100);
		inserir_final(vetor[i]);
	}
	cout << "\nLista com " << tam_vetor << " foi criada com sucesso! \nSegue a lista:\n";
	mostrarTodos();

}






