/*
 * Proyecto.cpp
 *
 *  Created on: 05/05/2018
 *      Author: User
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
#include <stdio.h>
#include <string.h>
#include <dirent.h>

using namespace std;

void getInformation(map<string,int> &mapa, int parametro);

int main_sinuso(){
	ifstream inputFile;
	inputFile.open("data/arc #1.txt");
	while(true){
		int ch = inputFile.get();
		if(ch == EOF) break;
		cout.put(ch);
	}
	inputFile.close();
}

void getInformation(map<string,int> &mapa, int parametro){

    DIR*     dir; //Apuntador al directorio
    dirent*  pdir; //Apuntador al espacio en memoria de la carpeta

    dir = opendir("data");// Abre el directorio asignado por la direccion

    char filename[300];

    while ((pdir = readdir(dir))){
    	cout<<"------------------------------"<<endl;
        cout << "---->NOMBRE ARCHIVO: "<<pdir->d_name << endl; //Nombre del archivo que esta an�lisando
        strcpy(filename, "data/"); //Asigna a la variable 'filename' el string a la derecha 'data/'
        strcat(filename, pdir->d_name);
        cout<<"Filename: "<<filename<<endl;
        ifstream file(filename);
        ifstream files(filename);
        if (file.is_open()){
        	while(true){
        		int ch=files.get();
        		if(ch==EOF) break;
        		cout.put(ch);
        	}
        	files.close();
        }
        file.close();
    }
    closedir(dir);
}
