/*
 * Aspirante.h
 *
 *  Created on: 19/05/2018
 *      Author: User
 */

#ifndef ASPIRANTE_H_
#define ASPIRANTE_H_

#include <iostream>
#include <string>
#include <vector>

class Aspirante{
private:
	std::string nombre;
	int puntaje;
	int trabajo;
	std::string pregunta1;
	std::string pregunta2;
	std::string pregunta3;
	std::string pregunta4;
	std::string pregunta5;

public:
	Aspirante(std::vector<std::string>vector);

	std::string getNombre();
	int getPuntaje();
	std::string getPregunta(int num);
	void setPuntaje(int puntaje);
	int getTrabajo();
};


#endif /* ASPIRANTE_H_ */
