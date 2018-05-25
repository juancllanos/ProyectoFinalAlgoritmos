#ifndef hash_hpp
#define hash_hpp

#include <list>
#include <iostream>
#include <algorithm>
#include "Aspirante.h"
#include <vector>

const std::size_t PRIME_INITIAL_DIMENSION = 10; // 101

template <typename dataType> class hashFunction;

template <typename dataType>
class hashTable {    
    std::size_t count;
    std::size_t nBuckets;
    std::vector<Aspirante> *table;
    
    std::size_t hashing(const dataType & data);
    
public:
    hashTable();;
    
    bool find(Aspirante data, int numero);
    void insert(Aspirante & data, int numero);
    std::vector<Aspirante> orden(int num);
    void print();
};

#include "hash.cpp"

#endif /* hash_hpp */
