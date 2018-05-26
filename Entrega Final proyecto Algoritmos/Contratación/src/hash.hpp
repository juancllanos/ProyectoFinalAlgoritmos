#ifndef hash_hpp
#define hash_hpp

#include <list>
#include <iostream>
#include <algorithm>
#include "Aspirante.h"
#include <vector>
#include <string>


/*
 * Clase hash que recibe a cada objeto de la clase Aspirante y lo almacena en el arreglop de vectores
 */

const std::size_t PRIME_INITIAL_DIMENSION = 10; // 101

template <typename dataType>
class hashTable {    
    std::size_t nBuckets; //Tamaño del arreglo (Siempre es de tamaño 5)
    std::vector<Aspirante> *table; //Arreglo de vectores de tipo Aspirante
    
public:
    hashTable();;
    
    void insert(Aspirante & data, int numero); //Función para insertar los Aspirantes segun la pregunta "numero"
    void orden(); //Función que organiza de mayor a menor los valores de los aspirantes en cada pregunta
    void print(); //Función que imprime el arreglo
    void LecturaArchivos();
    int listFileTemp();
};

#include "hash.cpp"

#endif /* hash_hpp */
