/*
 * pruebasArchivos.cpp
 *
 *  Created on: 05/05/2018
 *      Author: User
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <dirent.h>
#include <vector>

using namespace std;

int main(){

	int con = 3;

	string word="";
	vector<string>vector;

    DIR*     dir; //Apuntador al directorio
    dirent*  pdir; //Apuntador al espacio en memoria de la carpeta

    dir = opendir("data");// Abre el directorio asignado por la direccion

    char filename[300];

    while ((pdir = readdir(dir))){
    	cout<<"------------------------------"<<endl;
        cout << "---->"<<pdir->d_name << endl; //Nombre del archivo que esta an�lisando
        strcpy(filename, "data/"); //Asigna a la variable 'filename' el string a la derecha 'data/'
        strcat(filename, pdir->d_name);
        cout<<"Filename: "<<filename<<endl;
        ifstream file(filename);
        ifstream files(filename);
        if (file.is_open()){
        	while(true){
        		int temp =0;
        		int ch=files.get();
        		cout<<"--------------->PALABRA: "<<char(ch)<<endl;
				while(temp!=con){
					cout<<"CH: "<<char(ch)<<endl;
					ch=files.get();
					if(char(ch)==char(10)){
						temp+=1;
					}
				}
				int sh = files.get();
				while(char(sh)!=char(10)){
					word+=char(sh);
					cout<<"---->SH: "<<char(sh)<<endl;
					sh = files.get();
					if(sh == EOF) break;
				}
				cout<<"NOMBRE: "<<word<<endl;
				break;
        		//cout.put(ch);
        	}
    		vector.push_back(word);
    		word = "";
        	files.close();
        }
        file.close();
    }

    for(int i=0; i<int(vector.size()); i++){
    	cout<<"Parametro solicitado: "<<vector[i]<<endl;
    }

    closedir(dir);
    return 0;
}


