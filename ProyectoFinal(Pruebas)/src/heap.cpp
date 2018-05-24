/*
 * heap.cpp
 *
 *  Created on: 24/05/2018
 *      Author: vonnewmann
 */

#ifdef SRC_HEAP_H_

#include <iostream>
#include "Aspirante.h"
#include "heap.h"

const int TAMANO = 5;

Heap::Heap(){
	tamano = 5;
	Arreglo = new Aspirante [TAMANO];
	count = 0;
}

void Heap::insert(Aspirante *persona){
	if(count==1){
		Arreglo[count]=persona;
		count++;
	}else{
		if(count == TAMANO-1){
			Aspirante * temp = Arreglo;
			tamano = 2*tamano;
			Arreglo*=new Aspirante[tamano];
			for(int i=1; i<=count; i++){
				Arreglo[i] = temp[i];
			}
			delete[] temp;
			Arreglo[count]=persona;
			count++;
			int i=count-1;
			cambiar(Arreglo,i,(i/2));
		}else{
			Arreglo[count] = persona;
			count++;
			int i=count-1;
			cambiar(Arreglo,i,(i/2));
		}
	}
}

void Heap::cambiar(Aspirante * & Arreglo, int pos_h, int pos_p){
	if(pos_p == 1){
		if(Arreglo[pos_p]> Arreglo[pos_h]){
			int temp = Arreglo[pos_h];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;
		}else{
			return;
		}
	}else{
		if(Arreglo[pos_h]<Arreglo[pos_p]){
			int temp = Arreglo[pos_p];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;
		}else{
			return;
		}
	}
	cambiar(Arreglo,pos_h,pos_p);
}

#endif
