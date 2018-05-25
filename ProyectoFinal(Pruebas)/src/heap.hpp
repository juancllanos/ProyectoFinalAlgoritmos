/*
 * heap.hpp
 *
 *  Created on: 24/05/2018
 *      Author: vonnewmann
 */

#ifndef SRC_HEAP_HPP_
#define SRC_HEAP_HPP_

#include <iostream>
#include <vector>
#include "Trabajo.h"
#include "Aspirante.h"

template <typename DataType>
class Heap{
public:

	Heap();

	bool isEmpty( ) const;

	int size();

	const DataType & findMin( ) const;

	Aspirante getFirst();

	void insert(const Aspirante pareja, int puntaje);

	void deleteMax();

	void clear();

	void display();


private:

    unsigned int count; 				// Numero de elementos
    std::vector<Aspirante> array; 		// Vector de elementos
    void percolateDown( int hole );

};


#include "heap.cpp"

#endif /* SRC_HEAP_HPP_ */
