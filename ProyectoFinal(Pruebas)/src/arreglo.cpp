/*
 * arreglo.cpp
 *
 *  Created on: 18/05/2018
 *      Author: User
 */


#ifdef ARREGLO_H_

#include <iostream>
#include "heap.h"
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include "Aspirante.h"
#include "arreglo.h"

Trabajo::Trabajo(){
	count = 0;
	nBuckets = 5;
	table = new Heap[nBuckets];
	std::fill(table,table+nBuckets,Heap());
}

std::vector<Aspirante> Trabajo::clasificacionTrabajo(std::vector<std::vector<std::string> > vector, int num){
	std::vector<Aspirante> vector1;
	std::vector<Aspirante> vector2;
	std::vector<Aspirante> vector3;

	for(int i=0; i<int(vector.size());i++){
		Aspirante persona(vector[i]);
		switch(persona.getTrabajo()){
		case 1:
			vector1.push_back(persona);
			break;
		case 2:
			vector2.push_back(persona);
			break;
		case 3:
			vector3.push_back(persona);
			break;
		}
	}
	switch(num){
	case 1:
		return vector1;
		break;
	case 2:
		return vector2;
		break;
	case 3:
		return vector3;
		break;
	default:
		std::vector<Aspirante> vectorD;
		return vectorD;
		break;
	}
}

void Trabajo::Importancia(int I1,int I2, int I3, int I4, int I5){
	int N = 20;
	int P = 5;
	int D = 10;
	//int I = ((N*(P-D))/P)+N;
}
/*void Trabajo::insert(std::vector<std::string>vector){
	std::string nombre = vector[0];
	std::string trabajo = vector[1];
	std::string puntaje = vector[2];

	std::stringstream trabajoInt(trabajo);
	int tra = 0;
	trabajoInt >> tra;

	std::stringstream puntajeInt(puntaje);
	int punt = 0;
	puntajeInt >> punt;

	Work *valor = new Work();
	valor->name = nombre;
	valor->workP = tra;
	valor->score = punt;
	valor->right = NULL;
	valor->left = NULL;

	Work *first = &arreglo[tra];

	if(first==NULL){
		arreglo[tra]=*valor;
	}else{
		Work *find = first;
		if(find->score>valor->score){
			while(find->score>valor->score){
				find = find->right;
			}
			find->left->right = valor;
			valor->left = find->left;
			find->left = valor;
			valor->right = find;
		}else{
			find->left = valor;
			valor->right = find;
			first = valor;
		}
	}
}

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
	std::vector<std::vector<std::string>>vectorF;
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
						if(sh == std::EOF) break;
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

