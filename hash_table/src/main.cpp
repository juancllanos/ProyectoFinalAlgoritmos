#include <string>
#include <random>
#include <iostream>
#include "hash.hpp"
#include <vector>
#include "Aspirante.h"

using namespace std;

int main() {
	hashTable<Aspirante>tabla;

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

	Aspirante p1(v1);
	Aspirante p2(v2);
	Aspirante p3(v3);

	tabla.insert(p1, 1);
	tabla.insert(p1, 2);
	tabla.insert(p1, 3);
	tabla.insert(p1, 4);
	tabla.insert(p1, 5);

	tabla.insert(p2, 1);
	tabla.insert(p2, 2);
	tabla.insert(p2, 3);
	tabla.insert(p2, 4);
	tabla.insert(p2, 5);

	tabla.insert(p3, 1);
	tabla.insert(p3, 2);
	tabla.insert(p3, 3);
	tabla.insert(p3, 4);
	tabla.insert(p3, 5);



	tabla.print();
    
    return 0;
}
