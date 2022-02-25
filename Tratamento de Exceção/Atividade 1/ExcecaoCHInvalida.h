#ifndef EXCECAOCHINVALIDA_H
#define EXCECAOCHINVALIDA_H

using namespace std;

#include <stdexcept>
class ExcecaoCHInvalida : public invalid_argument
{
public:
	ExcecaoCHInvalida();
};
#endif
