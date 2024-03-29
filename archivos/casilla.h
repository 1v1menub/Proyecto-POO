#ifndef CASILLA_H
#define CASILLA_H


#include "tipos.h"
#include <vector>
#include "robot.h"

class Casilla {
	int numero;
	std::vector<coor> posicion;
	bool estado = false;
	cantidad gscore;


public:
	Casilla(numero_t n, coor x, coor y, score gs);
	std::vector <coor> get_pos();
	cantidad get_gscore();
	void set_gscore(cantidad n);
	bool get_estado();
	int get_numero();

};

#endif
