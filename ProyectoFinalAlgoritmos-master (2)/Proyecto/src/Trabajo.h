
#ifndef TRABAJO_H_
#define TRABAJO_H_

#include <string>
#include "Aspirantes.h"

template <typename dataType>
class Trabajo{
public:
	Trabajo();

	~Trabajo();

	void insert(Aspirantes a);

	void remove(Aspirantes a);

private:
	struct Cell{
		std::string Nombre;
		dataType valor;
		Cell *sig;
	};
	Cell **campos;
	int elements;
	int campo;
};




#endif /* TRABAJO_H_ */
