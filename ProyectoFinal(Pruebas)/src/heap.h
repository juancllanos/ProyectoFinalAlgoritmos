/*
 * heap.h
 *
 *  Created on: 24/05/2018
 *      Author: vonnewmann
 */

#ifndef SRC_HEAP_H_
#define SRC_HEAP_H_

#include <iostream>
#include "Aspirante.h"


class Heap{
private:
	Aspirante *Arreglo;
	int count;
	int tamano;
public:
	Heap();
	void insert(Aspirante *persona);
	void cambiar(Aspirante * & Arreglo, int pos_h, int pos_p);
};

#include "heap.cpp"

#endif /* SRC_HEAP_H_ */
