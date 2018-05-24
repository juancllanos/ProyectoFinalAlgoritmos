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
private:
    std::size_t count;
    std::size_t nBuckets;
    Heap *table;
    int trabajo;
    std::vector<Aspirante> aspirantes;
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
    void fillAspirantes(std::vector<std::vector<std::string> > vector);
    void Importancia(std::vector<Aspirante>);
};

#include "Trabajo.cpp"

#endif /* ARREGLO_H_ */
