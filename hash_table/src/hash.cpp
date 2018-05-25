#ifdef hash_hpp
#include "hash.hpp"

template <typename dataType>
hashTable<dataType>::hashTable() {
    std::cout << "Constructor for hash table" << std::endl;
    count = 0;
    nBuckets = 5;
    table = new std::vector<Aspirante>[nBuckets];
    std::fill(table, table + nBuckets, std::vector<Aspirante>());
    
    std::cout << nBuckets << " " << count << std::endl;
}

template<typename dataType>
void hashTable<dataType>::insert(Aspirante & data, int numero){
	//bool ingresado = find(data,numero);
	switch(numero){
	case 1:
		table[numero-1].push_back(data);
		orden(table[numero-1],numero);
		break;
	case 2:
		table[numero-1].push_back(data);
		orden(table[numero-1],numero);
		break;
	case 3:
		table[numero-1].push_back(data);
		orden(table[numero-1],numero);
		break;
	case 4:
		table[numero-1].push_back(data);
		orden(table[numero-1],numero);
		break;
	case 5:
		table[numero-1].push_back(data);
		orden(table[numero-1],numero);
		break;
	}
	count++;
}

template <typename dataType>
void hashTable<dataType>::orden(std::vector<Aspirante> &listaA, int num){
	bool y = true;
	int i=0;
	Aspirante mayor;
	mayor = listaA[0];
	while(i!=int(listaA.size())){
		if(mayor.getPregunta(num) < listaA[i+1].getPregunta(num)){
			Aspirante temp = mayor;
			mayor = listaA[i+1];
			listaA[i+1] = temp;
			y = false;
		}
		i++;
	}
	if (y == true){
		return;
	}else{
		orden(listaA,num);
	}
}

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
		for(int j=0; j<3; j++){
			std::cout<<table[i][j].getPregunta(i+1)<<std::endl;
		}
	}
}


#endif /* hash_hpp */	std::list<dataType> lista;
