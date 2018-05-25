/*
 * arregloMain.cpp
 *
 *  Created on: 18/05/2018
 *      Author: User
 */

#include <iostream>
#include <vector>
#include <string>
#include "Trabajo.h"
using namespace std;

//void cambiar(int &Arreglo[], int pos_h, int pos_p);

//void cambiar(int (&Arreglo)[5], int pos_h, int pos_p);


int main(){

	Heap<Aspirante>prueba;

	vector<string>v1;
	v1.push_back("felipe");
	v1.push_back("1"); //Trabajo
	v1.push_back("1");
	v1.push_back("2");
	v1.push_back("3");
	v1.push_back("4");
	v1.push_back("5");
	vector<string>v2;
	v2.push_back("juan");
	v2.push_back("1"); //Trabajo
	v2.push_back("6");
	v2.push_back("7");
	v2.push_back("8");
	v2.push_back("9");
	v2.push_back("10");
	vector<string>v3;
	v3.push_back("daniel");
	v3.push_back("1");//Trabajo
	v3.push_back("11");
	v3.push_back("12");
	v3.push_back("13");
	v3.push_back("14");
	v3.push_back("15");

	prueba.insert(v1, 4);
	prueba.insert(v2, 4);
	prueba.insert(v3, 4);

	//prueba.display();



	Aspirante p1(v1);
	Aspirante p2(v2);
	Aspirante p3(v3);

	Trabajo labor;
	/*vector<vector<string> > vectorF;
	vectorF.push_back(v1);
	vectorF.push_back(v2);
	vectorF.push_back(v3);
	labor.fillAspirantes(vectorF);*/
	vector<double>numeros;
	numeros.push_back(5);
	numeros.push_back(4);
	numeros.push_back(3);
	numeros.push_back(2);
	numeros.push_back(1);

	labor.insert(p1);
	labor.insert(p2);
	labor.insert(p3);

	labor.ingresoHeap(numeros);
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	labor.setPuntaje(numeros);
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	labor.ordenFinal();







	/*vector<string> vector;
	vector = labor.getInformation(1);
	for(int i=0; i<int(vector.size()); i++){
		cout<<vector[i]<<endl;
	}*/

}
/*
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
}*/
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
