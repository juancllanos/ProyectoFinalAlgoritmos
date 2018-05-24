/*
 * Trabajo.cpp
 *
 *  Created on: 12/05/2018
 *      Author: user
 */
#include "Trabajo.h"
#include <iostream>
#include <string>
using namespace std;

template <typename dataType>
Trabajo<dataType>::Trabajo(){
	campos = NULL;
	campo = 0;
	elements = 0;
}
template <typename dataType>
Trabajo<dataType>::~Trabajo(){
	delete campos;
}

template <typename dataType>
void Trabajo<dataType>::insert(Aspirantes a){
	for(int i = 0 ; i <1 ; i++){

		Cell as = new Cell;
		as->Nombre = a.getNombre;
		as->valor = a.get1();
		(campos[0])->sig = as;

		Cell as2 = new Cell;
		as2->Nombre = a.getNombre;
		as2->valor = a.get2();
		(campos[1])->sig = as2;

		Cell as3 = new Cell;
		as3->Nombre = a.getNombre;
		as3->valor = a.get3();
		(campos[2])->sig = as3;

		Cell as4 = new Cell;
		as4->Nombre = a.getNombre;
		as4->valor = a.get1();
		(campos[3])->sig = as4;

		Cell as5 = new Cell;
		as5->Nombre = a.getNombre;
		as5->valor = a.get5();
		(campos[4])->sig = as5;

	}
}




