#include "casilla.h"

casilla::casilla(longitud h, longitud w, coor x, coor y) {
	height = h;
	width = w;
	posicion[0] = x;
	posicion[1] = y;
	lleno = 0;
}
void casilla::set_estado(estado valor) {
	//False si no esta lleno True si si lo esta
	lleno = valor;
}
estado casilla::get_estado() {
	return lleno;
}

longitud casilla::get_width() {
	return width;
}

longitud casilla::get_height() {
	return height;
}
