/*
 * Proyectoh.cpp
 *
 *  Created on: 12/05/2018
 *      Author: User
 */
#ifdef PROYECTO_H_

#include<iostream>
#include<vector>

Aspirantes::Aspirantes(std::string nombre, int trabajo,std::vector<std::string>parametros){
	this->nombre = nombre;
	this->trabajo = trabajo;

	campo1 = parametros[0];
	campo2 = parametros[1];
	campo3 = parametros[2];
	campo4 = parametros[3];
	campo5 = parametros[4];
}






#endif
