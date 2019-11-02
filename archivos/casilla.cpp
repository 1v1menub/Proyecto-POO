#include "casilla.h"

Casilla::Casilla(longitud h, longitud w, coor x, coor y) {
	height = h;
	width = w;
	posicion[0] = x;
	posicion[1] = y;
	lleno = 0;
}
void Casilla::set_estado(estado valor) {
	//False si no esta lleno True si si lo esta
	lleno = valor;
}
estado Casilla::get_estado() {
	return lleno;
}

longitud Casilla::get_width() {
	return width;
}

longitud Casilla::get_height() {
	return height;
}
