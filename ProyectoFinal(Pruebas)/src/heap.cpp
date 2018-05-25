/*
 * heap.cpp
 *
 *  Created on: 24/05/2018
 *      Author: vonnewmann
 */
#ifdef SRC_HEAP_HPP_
#include "Trabajo.h"

template <typename DataType>
Heap<DataType>::Heap() {
    count = 0;
    array = std::vector<DataType>();
}


/**
* Inserta elem, permite duplicados
*/
template <typename DataType>
void Heap<DataType>::insert( const Aspirante  pareja, int puntaje){
	if(count==0){
		array.push_back(pareja);
		count+=1;
	}else{
		array.push_back(pareja);
		count+=1;
		int temp = count;
		int PHI;
		int PHD;
		if(temp%2==0){
			PHI = count/2;
			PHD = PHI;
		}else{
			PHD = (count-1)/2;
			PHI = PHD;
		}
		switch(puntaje){
		case 1:
			while(array[PHI-1].getPregunta(1) < array[temp-1].getPregunta(1) || array[PHD-1].getPregunta(1) < array[temp-1].getPregunta(1)){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		case 2:
			while(array[PHI-1].getPregunta(2) < array[temp-1].getPregunta(2) || array[PHD-1].getPregunta(2) < array[temp-1].getPregunta(2)){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		case 3:
			while(array[PHI-1].getPregunta(3) < array[temp-1].getPregunta(3) || array[PHD-1].getPregunta(3) < array[temp-1].getPregunta(3)){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		case 4:
			while(array[PHI-1].getPregunta(4) < array[temp-1].getPregunta(4) || array[PHD-1].getPregunta(4) < array[temp-1].getPregunta(4)){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		case 5:
			while(array[PHI-1].getPregunta(5) < array[temp-1].getPregunta(5) || array[PHD-1].getPregunta(5) < array[temp-1].getPregunta(5)){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		case 6:
			while(array[PHI-1].getPuntaje() < array[temp-1].getPuntaje() || array[PHD-1].getPuntaje() < array[temp-1].getPuntaje()){
				if(temp%2==0){
					Aspirante TEMP = array[PHI-1];
					array[PHI-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHI;
				}else{
					Aspirante TEMP = array[PHD-1];
					array[PHD-1] = array[temp-1];
					array[temp-1] = TEMP;
					temp = PHD;
				}
				if(temp==1){
					break;
				}else{
					if(temp%2==0){
						PHI = temp/2;
						PHD = PHI;
					}else{
						PHD = (temp-1)/2;
						PHI = PHD;
					}
				}
			}
			break;
		}
	}
}

/**
* Retorna verdadero si el heap esta vacio, falso de lo contrario
*/
template <typename DataType>
bool Heap<DataType>::isEmpty( ) const{
	return count == 0;
}

/**
* Retorna el elemento minimo en el heap. Lanza una excepcion si el heap esta vacio
*/
template <typename DataType>
const DataType & Heap<DataType>::findMin( ) const{
	if (count > 0){
		return array[1];
	}else{
		throw std::underflow_error("Tried to find an element in an empty heap");
	}
}


/**
 * Elimina el elemento minimo del heap. Lanza excepcion si el heapesta vacio.
*/
template <typename DataType>
void Heap<DataType>::deleteMax(){
	if(array.size()==0){
		return;
	}else{
		int posicion = 0;
		std::cout<<"Posicion: "<<posicion<<std::endl;

		unsigned int HD = ((2*(posicion+1))+1);
		unsigned int HI = (2*(posicion+1));
		std::cout<<"Hijo derecho: "<<HD<<"  Valor: "<<array[HD].getPuntaje()<<std::endl;
		std::cout<<"Hijo izquierdo: "<<HI<<"  Valor: "<<array[HI].getNombre()<<std::endl;

		Aspirante TEMP = array[0];
		array[0] = array[int(array.size())-1];
		std::cout<<"Valor que toma [0]: "<<array[0].getNombre()<<std::endl;
		array[int(array.size())-1] = TEMP;
		std::cout<<"Valor que toma [Ultimo]: "<<array[int(array.size())-1].getNombre()<<std::endl;
		array.pop_back();
		count-=1;
		HD-=1;
		HI-=1;
		std::cout<<"Tamno: "<<count<<std::endl;
		while(true){
			/*std::cout<<"Lista: "<<std::endl;
			for(int i=0; i<array.size(); i++){
				std::cout<<array[i]<<std::endl;
			}*/
			if(array[HD].getPuntaje()>array[HI].getPuntaje() && HD<count){
				std::cout<<"Hijo derecho: "<<HD<<std::endl;
				std::cout<<"Hijo izquierdo: "<<HI<<std::endl;
				TEMP = array[posicion];
				array[posicion] = array[HD];
				array[HD] = TEMP;
				posicion = HD;
			}else if(array[HD].getPuntaje()<array[HI].getPuntaje()){
				std::cout<<"Hijo derecho: "<<HD<<std::endl;
				std::cout<<"Hijo izquierdo: "<<HI<<std::endl;
				TEMP = array[posicion];
				array[posicion] = array[HI];
				array[HI] = TEMP;
				posicion = HI;
			}else if(array.size()==1){
				break;
			}else{
				std::cout<<"Hijo derecho: "<<HD<<std::endl;
				std::cout<<"Hijo izquierdo: "<<HI<<std::endl;
				TEMP = array[posicion];
				array[posicion] = array[HI];
				array[HI] = TEMP;
				posicion = HI;
			}
			HI = (2*(posicion))+1;
			HD = (2*(posicion))+2;
			//std::cout<<array[posicion]<<std::endl;
			if(HD>count || HI>count){
				break;
			}else if((array[HD].getPuntaje()<array[posicion].getPuntaje() && array[HI].getPuntaje()<array[posicion].getPuntaje())){
				break;
			}
		}
	}
}


 /**
 * Metodo privado para percolar hacia abajo un hueco creado (e.g. al eliminar un eemento)
 */
template <typename DataType>
 void Heap<DataType>::percolateDown( int hole ){

}

/**
* Muestra todos los elementos del heap en salida estandar
*/
template <typename DataType>
void Heap<DataType>::display(){
	for(unsigned int i = 0; i < count; ++i ){
		std::cout << array[i].getNombre()<<std::endl;
		std::cout << array[i].getPuntaje()<<std::endl;
		std::cout << array[i].getTrabajo()<<std::endl;
		std::cout << array[i].getPregunta(1)<<std::endl;
		std::cout << array[i].getPregunta(2)<<std::endl;
		std::cout << array[i].getPregunta(3)<<std::endl;
		std::cout << array[i].getPregunta(4)<<std::endl;
		std::cout << array[i].getPregunta(5)<<std::endl;
	}
}

template <typename DataType>
int Heap<DataType>::size(){
	return count;
}

template <typename DataType>
Aspirante Heap<DataType>::getFirst(){
	return array[0];
}

#endif

