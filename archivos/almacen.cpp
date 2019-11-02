#include "almacen.h"

Almacen::Almacen(longitud h, longitud w, cantidad r, cantidad c){
	height = h;
	width = w;
	rows = r;
	cols = c;

	longitud hc = height / rows;
	longitud wc = width / cols;

	for (coor i = 0; i < rows; i++) {
		for (coor j = 0; j < cols; j++) {
			casillas[i].push_back(casilla(hc, wc, i, j));
		}
	}
}

void Almacen::add_robot(Robot r) {
	robots.push_back(r);
}

void Almacen::add_slot(Slot s) {
	slots.push_back(s);
}
