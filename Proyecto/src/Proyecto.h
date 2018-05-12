
#ifndef PROYECTO_H_
#define PROYECTO_H_

#include <iostream>
template <typename dataType>
class Aspirantes{
public:

	Aspirantes();

	~Aspirantes();

	void rellenar(dataType a, dataType b, dataType c, dataType d, dataType e);

	dataType get1(dataType campo);
	dataType get2(dataType campo);
	dataType get3(dataType campo);
	dataType get4(dataType campo);
	dataType get5(dataType campo);

private:
	dataType campo1;
	dataType campo2;
	dataType campo3;
	dataType campo4;
	dataType campo5;
};




#endif /* PROYECTO_H_ */
