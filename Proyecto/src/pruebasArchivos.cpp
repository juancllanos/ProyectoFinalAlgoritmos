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

	int con = 1;
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
        		if(char(ch)==char(10)){
        			temp+=1;
        			if(temp==con){
        				while(char(ch)!=char(58)){
        					word+=char(ch);
        				}
        				break;
        			}
        			break;
        		}
        		//cout.put(ch);
        	}
        	files.close();
        }
        file.close();
    }
    closedir(dir);
    return 0;

    cout<<"PALABRA MUY IMPORTANTE: "<<word<<endl;
}


