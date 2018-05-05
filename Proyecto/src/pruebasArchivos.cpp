/*
 * pruebasArchivos.cpp
 *
 *  Created on: 05/05/2018
 *      Author: User
 */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <dirent.h>

using namespace std;

int main(){

    DIR*     dir; //Apuntador al directorio
    dirent*  pdir; //Apuntador al espacio en memoria de la carpeta

    dir = opendir("data");// Abre el directorio asignado por la direccion

    char filename[300];

    while ((pdir = readdir(dir))){
    	cout<<"------------------------------------"<<endl;
    	cout<<"-------------"<<pdir<<"-------------"<<endl;
    	cout<<"------------------------------------"<<endl;
        cout << "---->"<<pdir->d_name << endl; //Nombre del archivo que esta análisando
        strcpy(filename, "data/"); //Asigna a la variable 'filename' el string a la derecha 'data/'
        strcat(filename, pdir->d_name);
        cout<<"Filename: "<<filename<<endl;
        ifstream file(filename);
        ifstream files(filename);
        char output[30];
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
    return 0;
}


