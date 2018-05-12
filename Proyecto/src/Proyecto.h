
#ifndef PROYECTO_H_
#define PROYECTO_H_

#include <iostream>
#include <string>
#include <vector>


class Aspirantes{
public:

	Aspirantes(std::string nombre, int trabajo,std::vector<std::string>parametros);

	~Aspirantes();

	void rellenar(int a, int b, int c, int d, int e);

	int get1(int campo);
	int get2(int campo);
	int get3(int campo);
	int get4(int campo);
	int get5(int campo);


private:
	std::string nombre;
	int trabajo;

	std::string campo1; //Titulo
	std::string campo2; //años de experiencia
	std::string campo3; //Años de estudio
	std::string campo4; //Conocimiento en lenguajes
	std::string campo5; //trabajo en equipo
};



#include "Proyectoh.cpp"
#endif /* PROYECTO_H_ */
