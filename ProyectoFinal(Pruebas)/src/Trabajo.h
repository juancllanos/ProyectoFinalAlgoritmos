/*
 * arreglo.h
 *
 *  Created on: 18/05/2018
 *      Author: User
 */

#ifndef ARREGLO_H_
#define ARREGLO_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Aspirante.h"
#include "heap.hpp"

class Trabajo{
public:

    struct pair {
        int valor;
        std::string string;
    };

	Trabajo();
	//~Trabajo();

    bool find(const std::string & data);
    void insert(Aspirante personas);
    bool remove(const std::string & data);
    void clear();

    int listFile();
    std::vector<std::string> getInformation(int persona);
    void fillAspirantes(std::vector<std::vector<std::string> > vector);
    void ingresoHeap(std::vector<double>valorImportancia);
    void setPuntaje(std::vector<double>valorImportancia);
    void ordenFinal();
private:

    std::size_t count;
    std::size_t nBuckets;
    Heap<Aspirante> *table;
    int trabajo;
    std::vector<Aspirante> aspirantes;

};

#include "Trabajo.cpp"

#endif /* ARREGLO_H_ */
