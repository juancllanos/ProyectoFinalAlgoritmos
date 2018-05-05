/*
 * Proyecto.cpp
 *
 *  Created on: 05/05/2018
 *      Author: User
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

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
