#ifdef hash_hpp
#include "hash.hpp"
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <dirent.h>

template <typename dataType>
hashTable<dataType>::hashTable() {
    nBuckets = 5;
    table = new std::vector<Aspirante>[5];
    //Llenar el arreglo con objectos de tipo vector<Aspirante>
    std::fill(table, table + nBuckets, std::vector<Aspirante>());

}

template<typename dataType>
void hashTable<dataType>::insert(Aspirante & data, int numero){
	//Insertar en la correspondiente casilla de table el valor de la pregunta
	table[numero-1].push_back(data);
}

//Ordenamiento del arreglo
/*
 * Ordena cada una de las casillas del arreglo, comparando el valor del primer elemnto con cada uno de los siguientes
 */
template <typename dataType>
void hashTable<dataType>::orden(){
	for(int w=1; w<5+1; w++){
		bool fila = false;
		while(fila!=true){
			fila=true;
			for(int p=0; p<int(table[w-1].size())-1; p++){
				int mayor = table[w-1][p].getPregunta(w);
				int pregunta = table[w-1][p+1].getPregunta(w);
				if(mayor<pregunta){
					Aspirante temp = table[w-1][p+1];
					table[w-1][p+1] = table[w-1][p];
					table[w-1][p] = temp;
					fila=false;
				}
			}
		}
	}
}

//Función que imprime el valor de cada uno de los arreglos
template <typename dataType>
void hashTable<dataType>::print(){
	int cantidad = table[0].size();
	for(int i=0; i<5; i++){//se mueve en el arreglo
		std::cout<<"------------------------"<<std::endl;
		if(i!=5){
			std::cout<<"-------Campo "<<i+1<<"-------"<<std::endl;
		}
		for(int j=0; j<cantidad; j++){//Se mueve en los vectores
			std::cout<<table[i][j].getNombre()<<": "<<table[i][j].getPregunta(i+1)<<std::endl;
		}
	}
}

//Función que lee los archivos y crea los objetos de tipo aspirante
template<typename dataType>
void hashTable<dataType>::LecturaArchivos(){
	int cantidad = listFileTemp();
	std::vector<std::vector<std::string>>vectorF;
	for(int y=0; y<cantidad; y++){
		std::vector<std::string>vector;
		vectorF.push_back(vector);
	}
	//std::cout<<"ANTES DEL TRABAJO"<<std::endl;
	//std::cout<<vectorF.size()<<std::endl;
	int con = 1;
	int s=0;


	while(con!=8){
		std::string word="";

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
						if(sh == EOF) break;
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

	for(int j=0; j<cantidad; j++){
		Aspirante persona(vectorF[j]);
		for(int u=1; u<=5; u++){
			insert(persona,u);
		}
	}
	orden();
}
//Función que retorna la cantidad de archivos que hay para leer
template <typename dataType>
int hashTable<dataType>::listFileTemp(){
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
	return cantidad;
}
#endif /* hash_hpp */	//std::list<dataType> lista;
