/*
 * arregloMain.cpp
 *
 *  Created on: 18/05/2018
 *      Author: User
 */

#include <iostream>
#include <vector>
#include <string>

//#include "Trabajo.h"
using namespace std;

//void cambiar(int &Arreglo[], int pos_h, int pos_p);

void cambiar(int (&Arreglo)[5], int pos_h, int pos_p);


int main(){

	int array[] = {1,2,3,4,5};
	cambiar(array,4,2);
	cout<<"--------------------------------"<<endl;
	for (int i = 0; i< int (sizeof(array)/sizeof(*array));i++){
		cout << array[i] << " ";
	}

	return 0;
}

void cambiar(int (&Arreglo)[5], int pos_h, int pos_p){
	if(pos_p==1){
		if(Arreglo[pos_p]<Arreglo[pos_h]){
			int temp = Arreglo[pos_h];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;
		}else{
			return;
		}
	}else{
		if(Arreglo[pos_h]>Arreglo[pos_p]){
			int temp = Arreglo[pos_h];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;

			pos_h = pos_p;
			pos_p = (pos_h)/2;
		}else{
			return;
		}
	}
	cambiar(Arreglo,pos_h,pos_p);
	for (int i = 0; i< int (sizeof(Arreglo)/sizeof(*Arreglo));i++){
		cout << Arreglo[i] << " ";
	}
}
/*
void cambiar(int &Arreglo[],int pos_h,int pos_p){
	if(pos_h == 1){
		if(Arreglo[pos_p]> Arreglo[pos_h]){
			int temp = Arreglo[pos_h];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;
		}else{
			return;
		}
	}else{
		if(Arreglo[pos_h]<Arreglo[pos_p]){
			int temp = Arreglo[pos_p];
			Arreglo[pos_h] = Arreglo[pos_p];
			Arreglo[pos_p] = temp;

			pos_h = pos_p;
			pos_p = (pos_h)/2;
		}else{
			return;
		}
	}
	cambiar(Arreglo,pos_h,pos_p);
}*/
