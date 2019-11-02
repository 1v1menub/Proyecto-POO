#include "tipos.h"
#include <vector>

class Casilla {
private:
	longitud height;
	longitud width;
	std::vector<coor> posicion;
	estado lleno;
	
public:
	Casilla(longitud h, longitud w, coor x, coor y);
	void set_estado(estado valor);
	longitud get_height();
	longitud get_width();
	estado get_estado();

};
