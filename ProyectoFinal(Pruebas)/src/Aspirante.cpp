/*
 * Aspirante.cpp
 *
 *  Created on: 19/05/2018
 *      Author: User
 */


#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Aspirante.h"

Aspirante::Aspirante(std::vector<std::string>vector){
	std::string trabajoF = vector[1];

	std::stringstream trabajoInt(trabajoF);
	int tra = 0;
	trabajoInt >> tra;

	nombre = vector[0];
	trabajo = tra;
	puntaje = 0;

	pregunta1 = vector[3];
	pregunta2 = vector[4];
	pregunta3 = vector[5];
	pregunta4 = vector[6];
	pregunta5 = vector[7];
}


void Aspirante::setPuntaje(int puntaje){
	this->puntaje = puntaje;
}

int Aspirante::getPuntaje(){
	return puntaje;
}

std::string Aspirante::getNombre(){
	return nombre;
}

int Aspirante::getTrabajo(){
	return trabajo;
}

std::string Aspirante::getPregunta(int num){
	switch(num){
	case 1:
		return pregunta1;
		break;
	case 2:
		return pregunta2;
		break;
	case 3:
		return pregunta3;
		break;
	case 4:
		return pregunta4;
		break;
	case 5:
		return pregunta5;
		break;
	default:
		return "Error";
	}
}

