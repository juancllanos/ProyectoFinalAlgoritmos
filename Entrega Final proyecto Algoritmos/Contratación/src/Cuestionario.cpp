/*
 * Cuestionario.cpp
 *
 *  Created on: 26/05/2018
 *      Author: User
 */



#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "hash.hpp"
#include "Aspirante.h"

using namespace std;

int main(){
	vector<int>OrdenImportancia;

	cout<<"BIENVENIDO"<<endl;
	cout<<"Trabajo a analisar es: Desarrollador"<<endl;
	cout<<"1) A�os de estudio \n2) A�os de experiencia \n3) Titulo \n4) Trabajo en equipo \n5) Algo"<<endl;
	int preguntas = 0;
	while(preguntas<5){
		cout<<"De 1 a 5, Qu� tan importante es para usted la caracteristica n�mero "<<preguntas+1<<endl;
		int valor=0;
		cin>>valor;
		OrdenImportancia.push_back(valor);
		preguntas+=1;
	}
	hashTable<Aspirante>tabla;
	tabla.LecturaArchivos();
	tabla.print();
}

