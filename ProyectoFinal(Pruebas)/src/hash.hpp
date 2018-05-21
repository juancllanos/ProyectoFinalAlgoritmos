#ifndef hash_hpp
#define hash_hpp

#include <list>
#include <iostream>
#include <algorithm>

const std::size_t PRIME_INITIAL_DIMENSION = 5; // 101

template <typename dataType> class hashFunction;

template <typename dataType>
class hashTable {
    std::size_t count;
    std::size_t nBuckets;
    std::list<dataType> *table;

    std::size_t hashing(const dataType & data);

public:
    hashTable();
    //~hashTable();

    bool find(const dataType & data);
    bool insert(const dataType & data);
    bool remove(const dataType & data);
    void clear();
};

#include "hash.cpp"

template <>
class hashFunction<short> {
public:
    std::size_t operator()(const short & data) {
        return static_cast<std::size_t>(data);
    }
};

template <>
class hashFunction<std::string> {
public:
    std::size_t operator()(const std::string & data) {
        std::size_t code = 0;
        for (const auto & ch : data) code += ch;
        return code;
    }
};

#endif /* hash_hpp */



