#include "robot.h"

Robot::Robot(numero _numero_robot, estado _estado_robot, coor x, coor y, vector<coor> _posicion_robot, Producto* _contenido) {
  numero_robot = _numero_robot;
  estado_robot = _estado_robot;
  posicion_home = _posicion_home;
  posicion_robot = {x, y};
  contenido = _contenido;
}

void Robot::set_Posicion_X(coor x) {
	posicion_robot[0] = x;
}

void Robot::set_Posicion_Y(coor y) {
	posicion_robot[1] = y;
}

void Robot::depositar() {
  estado_robot = false;
  contenido = nullptr;
}

void Robot::cargar(Producto* producto) {
  estado_robot = true;
  contenido = producto;
}

void Robot::esperar() {
  posicion_robot[0] = posicion_robot[0];
  posicion_robot[1] = posicion_robot[1]; 
} // ya se que esto no hace nada pero como tengo imaginado la cosa se le otorga 1 movimiento a cada robot y luego se ejecutan todos y luego otro y asi, si la instruccion detecta una colision entonces le dice al robot que ejecute la funcion esperar. 

Producto* Robot::get_producto() {
  return contenido;
}

estado Robot::get_estado_robot() {
  return estado_robot;
}

numero Robot::get_numero_robot() {
  return numero_robot;
}

vector<coor> Robot::get_posicion_robot() {
  return posicion_robot;
}
