/*
 * Cuestionario.cpp
 *
 *  Created on: 19/05/2018
 *      Author: User
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


bool repeticion(vector<int>vector,int num);

int main(){

	int trabajo = 0;
	string valores;
	vector<int>OrdenImportancia;
	vector<string>Cuestiones;

	cout<<"BIENVENIDO"<<endl;
	cout<<"->�C�al de los suiguientes trabajos quiere analizar?"<<endl;
	cout<<"1) Desarrollador \n2) Administrador \n3) Analista"<<endl;
	cout<<"Escriba un n�mero (1,2,3): "<<endl;
	cin>>trabajo;
	cout<<"-------------------------------------------------"<<endl;
	cout<<""<<endl;

	switch(trabajo){
	case 1:{
		while(true){
			bool funciona = false;
			cout<<"Trabajo a analisar es: Desarrollador"<<endl;
			cout<<"1) A�os de estudio \n2) A�os de experiencia \n3) Titulo \n4) Trabajo en equipo \n5) Algo"<<endl;
			cout<<"Ingrese de menor a mayor las caracteristicas que le parecen mas importantes"<<endl;
			string palabra;
			cin.ignore();
			getline(cin,palabra);
			int i=0;
			while(i!=int(palabra.size()+1)){
				int num = palabra[i]-48;
				if(palabra[i]!=char(32) && repeticion(OrdenImportancia,num)==false){
					OrdenImportancia.push_back(num);
				}else if(repeticion(OrdenImportancia,num)==true){
					cout<<""<<endl;
					cout<<"-------------------------------------------"<<endl;
					cout<<"ERROR NUMERO REPETIDO, INGRESE CADA VALOR SOLO UNA VEZ. INTENTE NUEVAMENTE"<<endl;
					cout<<"-------------------------------------------"<<endl;
					cout<<""<<endl;
					break;
				}
				if(i==int(palabra.size())){
					funciona = true;
					break;
				}
				i+=1;
			}
			if(funciona==true){
				break;
			}
			palabra = "";
			OrdenImportancia.clear();
		}
		cout<<"TERMINO PROCESO"<<endl;
		break;
	}
	case 2:
		cout<<"Trabajo a analisar es: Administrador"<<endl;
		break;
	case 3:
		cout<<"Trabajo a analisar es: Analista"<<endl;
		break;
	}
}

bool repeticion(vector<int>vector,int num){
	bool value = false;
	for(int i=0; i<int(vector.size());i++){
		if(vector[i]==num){
			value = true;
		}
	}
	return value;
}


