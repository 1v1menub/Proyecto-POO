#include "Almacen.h"

almacen::almacen(longitud h, longitud w, cantidad r, cantidad c){
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

void almacen::add_robot(robot r) {
	robots.push_back(r);
}

void almacen::add_slot(slot s) {
	slots.push_back(s);
}
