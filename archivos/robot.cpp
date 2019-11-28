#include "Robot.h"

Robot::Robot(numero_t _numero_robot, coor x, coor y) {// Producto* _contenido) {
	numero_robot = _numero_robot;
	posicion_robot = { x, y };
	home = { x, y };
}


void Robot::set_Posicion_X(coor x) {
	posicion_robot[0] = x;
}

void Robot::set_Posicion_Y(coor y) {
	posicion_robot[1] = y;
}



numero_t Robot::get_numero_robot() {
	return numero_robot;
}

vector<coor> Robot::get_posicion_robot() {
	return posicion_robot;
}

void Robot::set_producto(nombre prod) {
	producto = prod;
}

nombre Robot::get_producto() {
	return producto;
}

vector<coor> Robot::get_home_robot() {
	return home;
}
