#ifndef EXCECAOALUNOINEXISTENTE_H
#define EXCECAOALUNOINEXISTENTE_H

#include <stdexcept>

using namespace std;

class ExcecaoAlunoInexistente : public runtime_error
{

public:
	ExcecaoAlunoInexistente();
};
#endif
