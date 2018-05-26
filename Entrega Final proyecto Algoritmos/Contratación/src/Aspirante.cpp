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

Aspirante::Aspirante(){
	std::string vector;

	nombre="";
	trabajo=0;
	puntaje=0;

	pregunta1 = vector[0];
	pregunta2 = vector[1];
	pregunta3 = vector[2];
	pregunta4 = vector[3];
	pregunta5 = vector[4];


	//Convertir las respuestas de tipo string a enteros
	std::stringstream PuntajeP1(pregunta1);
	Pre1 = 0;
	PuntajeP1 >> Pre1;

	std::stringstream PuntajeP2(pregunta2);
	Pre2 = 0;
	PuntajeP2 >> Pre2;

	std::stringstream PuntajeP3(pregunta3);
	Pre3 = 0;
	PuntajeP3 >> Pre3;

	std::stringstream PuntajeP4(pregunta4);
	Pre4 = 0;
	PuntajeP4 >> Pre4;

	std::stringstream PuntajeP5(pregunta5);
	Pre5 = 0;
	PuntajeP5 >> Pre5;
}

//Constructor que recibe un vector con toda la infromación del aspirante
Aspirante::Aspirante(std::vector<std::string>vector){
	std::string trabajoF = vector[1];

	//Convertir el valor string de trabajo a entero
	std::stringstream trabajoInt(trabajoF);
	int tra = 0;
	trabajoInt >> tra;

	nombre = vector[0];
	trabajo = tra;
	puntaje = 0;

	//Valores string de cada una de las preguntas
	pregunta1 = vector[2];
	pregunta2 = vector[3];
	pregunta3 = vector[4];
	pregunta4 = vector[5];
	pregunta5 = vector[6];

	//Convertir las respuestas de tipo string a entero
	std::stringstream PuntajeP1(pregunta1);
	Pre1 = 0;
	PuntajeP1 >> Pre1;

	std::stringstream PuntajeP2(pregunta2);
	Pre2 = 0;
	PuntajeP2 >> Pre2;

	std::stringstream PuntajeP3(pregunta3);
	Pre3 = 0;
	PuntajeP3 >> Pre3;

	std::stringstream PuntajeP4(pregunta4);
	Pre4 = 0;
	PuntajeP4 >> Pre4;

	std::stringstream PuntajeP5(pregunta5);
	Pre5 = 0;
	PuntajeP5 >> Pre5;
}

//Función que permite editar el valor del puntaje global
void Aspirante::setPuntaje(int puntaje){
	this->puntaje = puntaje;
}
//Función que retorna el valor del puntaje global
int Aspirante::getPuntaje(){
	return puntaje;
}
//Función que retorna el nombre del aspirante
std::string Aspirante::getNombre(){
	return nombre;
}

//Función que retorna el trabajo al que se esta presentando
int Aspirante::getTrabajo(){
	return trabajo;
}

//Función que retorna el valor de la pregunta que se necesite
int Aspirante::getPregunta(int num){
	switch(num){
	case 1:
		return Pre1;
		break;
	case 2:
		return Pre2;
		break;
	case 3:
		return Pre3;
		break;
	case 4:
		return Pre4;
		break;
	case 5:
		return Pre5;
		break;
	default:
		return 0;
	}
}

