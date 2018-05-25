#include <string>
#include <random>
#include <iostream>
#include "hash.hpp"
#include <vector>
#include "Aspirante.h"
#include <algorithm>

using namespace std;

int main() {
	hashTable<Aspirante>tabla;

	vector<string>v1;
	v1.push_back("Felipe");
	v1.push_back("2"); //Trabajo
	v1.push_back("5");
	v1.push_back("80");
	v1.push_back("2");
	v1.push_back("405");
	v1.push_back("5");
	vector<string>v2;
	v2.push_back("Juan");
	v2.push_back("1"); //Trabajo
	v2.push_back("6");
	v2.push_back("2");
	v2.push_back("4");
	v2.push_back("1");
	v2.push_back("780");
	vector<string>v3;
	v3.push_back("Daniel");
	v3.push_back("3");//Trabajo
	v3.push_back("51");
	v3.push_back("62");
	v3.push_back("3");
	v3.push_back("114");
	v3.push_back("155");

	vector<string>v4;
	v4.push_back("Camilo");
	v4.push_back("1");//Trabajo
	v4.push_back("3");
	v4.push_back("23");
	v4.push_back("12");
	v4.push_back("87");
	v4.push_back("95");

	vector<string>v5;
	v5.push_back("Andres");
	v5.push_back("2");//Trabajo
	v5.push_back("23");
	v5.push_back("52");
	v5.push_back("12");
	v5.push_back("78");
	v5.push_back("165");

	Aspirante p1(v1);
	Aspirante p2(v2);
	Aspirante p3(v3);
	Aspirante p4(v4);
	Aspirante p5(v5);

	tabla.insert(p1, 1);
	tabla.insert(p2, 1);
	tabla.insert(p3, 1);
	tabla.insert(p4, 1);
	tabla.insert(p5, 1);

	tabla.insert(p1, 2);
	tabla.insert(p2, 2);
	tabla.insert(p3, 2);
	tabla.insert(p4, 2);
	tabla.insert(p5, 2);

	tabla.insert(p1, 3);
	tabla.insert(p2, 3);
	tabla.insert(p3, 3);
	tabla.insert(p4, 3);
	tabla.insert(p5, 3);

	vector<int>Pregunta1;
	vector<int>Pregunta2;
	vector<int>Pregunta3;
	vector<int>Pregunta4;
	vector<int>Pregunta5;

	Pregunta1.push_back(p1.getPregunta(1));
	Pregunta1.push_back(p1.getPregunta(1));

	tabla.print();
	cout<<"-------------------"<<endl;
	//vector<Aspirante>prueba = tabla.orden(1);
	//cout<<prueba.size()<<endl;
	//cout<<prueba[1].getPuntaje();

	//vector<Aspirante>prueba = orden(int 1);

    
    return 0;
}
