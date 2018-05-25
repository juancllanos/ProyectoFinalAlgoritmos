#ifdef hash_hpp
#include "hash.hpp"

template <typename dataType>
hashTable<dataType>::hashTable() {
    count = 0;
    nBuckets = 5;
    table = new std::vector<Aspirante>[nBuckets];
    std::fill(table, table + nBuckets, std::vector<Aspirante>());

}

template<typename dataType>
void hashTable<dataType>::insert(Aspirante & data, int numero){
	table[numero-1].push_back(data);
	//orden(table[numero-1],numero,0);
}
/*
template <typename dataType>
std::vector<Aspirante> hashTable<dataType>::orden(int num){
	int i=0;
	Aspirante mayor = table[num-1][i];
	while(i<int(table[num-1].size())){
		std:cout<<int(table[num-1].size())<<std::endl;
		std::cout<<table[num-1][i].getPregunta(num)<<std::endl;
		std::cout<<table[num-1][i-1].getPregunta(num)<<std::endl;
		if(table[num-1][i].getPregunta(num)>table[num-1][i-1].getPregunta(num)){
			Aspirante temp = table[num][i];
			table[num][i] = mayor;
			mayor = temp;
		}
		i+=2;
	}
	return table[num-1];
}*/

template<typename dataType>
bool hashTable<dataType>::find(Aspirante data, int numero){
	for(auto it = table[numero].begin(); it != table[numero].end(); it++){
		std::cout<<it->getNombre()<<std::endl;
		if(it->getNombre() == data.getNombre()) return true;
	}
	return false;
}

template <typename dataType>
std::size_t hashTable<dataType>::hashing(const dataType & data) {
    hashFunction<dataType> hashFunctor;
    return hashFunctor(data) % nBuckets;
}

template <typename dataType>
void hashTable<dataType>::print(){
	std::cout<<"Prueba"<<std::endl;
	for(int i=0; i<5; i++){
		std::cout<<"------------------------"<<std::endl;
		if(i!=3){
			std::cout<<"-------Campo "<<i+1<<"-------"<<std::endl;
		}
		for(int j=0; j<5; j++){
			std::cout<<table[i][j].getNombre()<<": "<<table[i][j].getPregunta(i+1)<<std::endl;
		}
	}
}


#endif /* hash_hpp */	//std::list<dataType> lista;
