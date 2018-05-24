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
#include "heap.h"
#include "Aspirante.h"

class Trabajo{
    std::size_t count;
    std::size_t nBuckets;
    Heap *table;
/*	struct Work{
		std::string name;
		int workP;
		int score;
		Work *right;
		Work *left;
	};
	Work arreglo[];

	void llenarArreglo();
*/
public:
	Trabajo();
	//~Trabajo();

    bool find(const std::string & data);
    bool insert(const std::string & data);
    bool remove(const std::string & data);
    void clear();

    int listFile();
    std::vector<std::string> getInformation(int persona);
    std::vector<Aspirante> clasificacionTrabajo(std::vector<std::vector<std::string> > vector, int num);
    void Importancia(int I1,int I2, int I3, int I4, int I5);
};

#include "arreglo.cpp"

#endif /* ARREGLO_H_ */
