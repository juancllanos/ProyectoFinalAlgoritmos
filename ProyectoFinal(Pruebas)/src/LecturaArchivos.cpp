/*
 * LecturaArchivos.cpp
 *
 *  Created on: 18/05/2018
 *      Author: User
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <dirent.h>
#include <vector>

using namespace std;

int listFileTemp();

int main_LECTURA(){
	//listFileTemp();


	vector<string>uno;
	vector<string>dos;
	vector<string>tres;
	vector<string>cuatro;
	vector<string>cinco;
	vector<string>seis;

	int cantidad = listFileTemp();
	vector<vector<string> >vectorF;
	/*for(int y=0; y<cantidad; y++){
		vector<string>vector;
		vectorF.push_back(vector);
	}*/
	vectorF.push_back(uno);
	vectorF.push_back(dos);
	vectorF.push_back(tres);
	vectorF.push_back(cuatro);
	vectorF.push_back(cinco);
	vectorF.push_back(seis);
	cout<<"ANTES DEL TRABAJO"<<endl;
	cout<<vectorF.size()<<endl;
	int con = 1;
	int s=0;
	int comienzo = 3;


	while(con!=6){
		cout<<"Con: "<<con<<endl;

		string word="";
		//vector<string>vector = vectorF[i];

		DIR*     dir; //Apuntador al directorio
		dirent*  pdir; //Apuntador al espacio en memoria de la carpeta

		dir = opendir("data");// Abre el directorio asignado por la direccion

		char filename[300];

		while ((pdir = readdir(dir))){
			cout<<"VALOR DE S: "<<s<<endl;
			cout<<"------------------------------"<<endl;
			cout << "---->"<<pdir->d_name << endl; //Nombre del archivo que esta an�lisando
			strcpy(filename, "data/"); //Asigna a la variable 'filename' el string a la derecha 'data/'
			strcat(filename, pdir->d_name);
			cout<<"Filename: "<<filename<<endl;
			ifstream file(filename);
			ifstream files(filename);
			if (file.is_open() && comienzo==2){
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
					cout.put(ch);
				}
				cout<<"---->AGREGANDO VALORES A VECTOR"<<endl;
				vectorF[s].push_back(word);
				cout<<vectorF[s].size()<<endl;
				word = "";
				s+=1;
				//files.close();
			}
			comienzo+=1;
			file.close();
		}
		s=0;
		con+=1;
		closedir(dir);
	}
	cout<<"----------------------"<<endl;
	cout<<"FINAL DEL PROGRAMA"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Tamano vectorF: "<<vectorF.size()<<endl;
	cout<<"Tamano vector 1: "<<vectorF[0].size()<<endl;
	cout<<"Tamano vector 2: "<<vectorF[1].size()<<endl;
	cout<<"Tamano vector 3: "<<vectorF[2].size()<<endl;
	cout<<"Tamano vector 4: "<<vectorF[3].size()<<endl;
	for(int i=0; i<cantidad; i++){
		cout<<"---------------------"<<endl;
	    for(int p=0; p<5; p++){
	    	cout<<"Parametro: "<<vectorF[i][p]<<endl;
	    }
	}
}

int listFileTemp(){
	int cantidad = 0;
	DIR *pDIR;
	struct dirent *entry;
	if( (pDIR=opendir("data")) ){
			while( (entry = readdir(pDIR)) ){
				if( strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 )
				cout << entry->d_name << "\n";
				cantidad+=1;
			}
			closedir(pDIR);
	}
	return cantidad-2;
}

