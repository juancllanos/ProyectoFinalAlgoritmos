/*
 * arreglo.cpp
 *
 *  Created on: 18/05/2018
 *      Author: User
 */


#ifdef ARREGLO_H_

#include <iostream>
#include "heap.hpp"
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "Aspirante.h"
#include <dirent.h>


Trabajo::Trabajo(){
	trabajo = 0;
	count = 0;
	nBuckets = 5;
	table = new Heap<Aspirante>[nBuckets];
	std::fill(table,table+nBuckets,Heap<Aspirante>());
    std::vector<Aspirante> aspirantes;

}

/*void Trabajo::fillAspirantes(std::vector<std::vector<std::string> > vector){
	for(int i=0; i<int(vector.size());i++){
		Aspirante persona(vector[i]);
		if (persona.getTrabajo() == this->trabajo){
			aspirantes.push_back(persona);
		}
	}
}*/


void Trabajo::ingresoHeap(std::vector<double>valorImportancia){
	std::cout<<"Valores importantes: "<<std::endl;
	for(int i=0; i<int(aspirantes.size()); i++){
		std::cout<<"Valor i: "<<i<<std::endl;
		for(int p = 0; p<int(valorImportancia.size()); p++){
			std::cout<<"Valor de P: "<<p<<std::endl;
			switch(p){
			case 0:
				table[0].insert(aspirantes[i],1);
				std::cout<<"----->Aspirante: "<<aspirantes[i].getNombre()<<std::endl;
				break;
			case 1:
				table[1].insert(aspirantes[i],2);
				std::cout<<"----->Aspirante: "<<aspirantes[i].getNombre()<<std::endl;
				break;
			case 2:
				table[2].insert(aspirantes[i],3);
				std::cout<<"----->Aspirante: "<<aspirantes[i].getNombre()<<std::endl;
				break;
			case 3:
				table[3].insert(aspirantes[i],4);
				std::cout<<"----->Aspirante: "<<aspirantes[i].getNombre()<<std::endl;
				break;
			case 4:
				table[4].insert(aspirantes[i],4);
				std::cout<<"----->Aspirante: "<<aspirantes[i].getNombre()<<std::endl;
				break;
			default:
				return;
			}
		}
	}
}

void Trabajo::insert(Aspirante personas){
	aspirantes.push_back(personas);
}

void Trabajo::setPuntaje(std::vector<double>valorImportancia){
	double total = 0;
	for(int i=0; i<int(valorImportancia.size()); i++){
		total += valorImportancia[i];
	}
	std::cout<<"Valor de importancia general: "<<total<<std::endl;
	for(int i=1; i<5; i++){
		for(int j=0; j<5; j++){
			std::cout<<"Tamano de los heap: "<<table[j].size()<<std::endl;
		}
		std::cout<<"------------------>Persona: "<<table[i].getFirst().getPregunta(i)<<std::endl;
		int valorParcial = table[i].getFirst().getPuntaje();
		table[i].getFirst().setPuntaje((valorImportancia[i]/total)*(i*100)+valorParcial);
		valorParcial = 0;
		table[i].deleteMax();
	}
}

void Trabajo::ordenFinal(){
	Heap<Aspirante> *tabla = new Heap<Aspirante>();
	for(int i=0; i<int(aspirantes.size()); i++){
		tabla->insert(aspirantes[i],6);
	}
}

/*
void Trabajo::print(){
	for(int i=0; i<5; i++){
		for(Work *cp=&arreglo[i];cp!=NULL; cp++){
			std::cout<<"Nombre: "<<cp->name<<std::endl;
			std::cout<<"Puntaje: "<<cp->score<<std::endl;
		}
	}
}*/

/*
std::vector<std::string> Trabajo::getInformation(int persona){
	int cantidad = listFile();
	std::vector<std::vector<std::string> > vectorF;
	for(int y=0; y<cantidad; y++){
		std::vector<std::string>vector;
		vectorF.push_back(vector);
	}
	int con = 1;
	int s=0;


	while(con!=6){

		std::string word="";
		//vector<string>vector = vectorF[i];

		DIR*     dir; //Apuntador al directorio
		dirent*  pdir; //Apuntador al espacio en memoria de la carpeta

		dir = opendir("data");// Abre el directorio asignado por la direccion

		char filename[300];

		while ((pdir = readdir(dir))){
			strcpy(filename, "data/"); //Asigna a la variable 'filename' el string a la derecha 'data/'
			strcat(filename, pdir->d_name);
			std::ifstream file(filename);
			std::ifstream files(filename);
			if (file.is_open()){
				while(true){
					int temp =0;
					int ch=files.get();
					while(temp!=con){
						ch=files.get();
						if(char(ch)==char(10)){
							temp+=1;
						}
					}
					int sh = files.get();
					while(char(sh)!=char(10)){
						word+=char(sh);
						sh = files.get();
						if(sh == EOF){
							break;
						}
					}
					break;
				}
				vectorF[s].push_back(word);
				word = "";
				s+=1;
				files.close();
			}
			file.close();
		}
		s=0;
		con+=1;
		closedir(dir);
	}
	return vectorF[persona];
}

int Trabajo::listFile(){
	int cantidad = 0;
	DIR *pDIR;
	struct dirent *entry;
	if( (pDIR=opendir("data")) ){
			while( (entry = readdir(pDIR)) ){
					if( strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 )
					cantidad+=1;
			}
			closedir(pDIR);
	}
	return cantidad-2;
}*/

#endif

