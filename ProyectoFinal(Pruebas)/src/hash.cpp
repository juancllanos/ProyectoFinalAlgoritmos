#ifdef hash_hpp

template <typename dataType>
hashTable<dataType>::hashTable() {
    std::cout << "Constructor for hash table" << std::endl;

    count = 0;
    nBuckets = PRIME_INITIAL_DIMENSION;
    table = new std::list<dataType>[nBuckets];
    std::fill(table, table + nBuckets, std::list<dataType>());
}


template <typename dataType>
std::size_t hashTable<dataType>::hashing(const dataType & data) {
    hashFunction<dataType> hashFunctor;
    return hashFunctor(data) % nBuckets;
}

template <typename dataType>
bool hashTable<dataType>::insert(const dataType & data){
	if(find(data)==true){
		return false;
	}else{
		std::size_t valor = hashing(data);
		table[valor].push_back(data);
		return true;
	}
}

template <typename dataType>
bool hashTable<dataType>::find(const dataType & data){
	std::size_t valor = hashing(data);
	if(table[valor].size()==0){
		return false;
	}else{
		bool isIn = false;
		typename std::list<dataType>::iterator it = table[valor].begin();
		while(isIn!=true){
			if(*it==data){
				isIn = true;
				break;
			}else if(it==table[valor].end()){
				break;
			}else{
				++it;
			}
		}
		return isIn;
	}
}

template <typename dataType>
bool hashTable<dataType>::remove(const dataType & data){
	std::size_t valor = hashing(data);
	if(find(data)==true){
		typename std::list<dataType>::iterator it = table[valor].begin();
		bool isIn = false;
		while(isIn!=false){
			if(*it==data){
				table[valor].erase(it);
				isIn = true;
			}else{
				++it;
			}
		}
		return true;
	}else{
		return false;
	}
}

template <typename dataType>
void hashTable<dataType>::clear(){
	for(int i=0; i<nBuckets; i++){
		table[i].clear();
	}
}

#endif /* hash_hpp */



