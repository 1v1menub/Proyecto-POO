#include "robot.h"

Robot::Robot(numero _numero_robot, estado _estado_robot, vector<coor> _posicion_home, vector<coor> _posicion_robot, nombre _contenido) {
  numero_robot = _numero_robot;
  estado_robot = _estado_robot;
  posicion_home = _posicion_home;
  posicion_robot = _posicion_robot;
  contenido = _contenido
}

void Robot::avanzar_x(vector<coor> destino) {
  for(int i = posicion_robot[0]; i < destino[0]; i++) {
    posicion_robot[0]++;
  }
}

void Robot::retroceder_x(vector<coor> destino) {
  for(int i = posicion_robot[0]; i > destino[0]; i--) {
    posicion_robot[0]--;
  }
}

void Robot::avanzar_y(vector<coor> destino) {
  for(int i = posicion_robot[1]; i < destino[1]; i++) {
    posicion_robot[1]++;
  }
}

void Robot::retroceder_y(vector<coor> destino) {
  for(int i = posicion_robot[1]; i > destino[1]; i--) {
    posicion_robot[1]--;
  }
}

void Robot::depositar() {
  estado_robot = false;
  contenido = "Vacio";
}

void Robot::cargar(Producto producto) {
  estado_robot = true;
  contenido = get_nombre();
}

void Robot::esperar() {
  posicion_robot[0] = posicion_robot[0];
  posicion_robot[1] = posicion_robot[1]; 
} // ya se que esto no hace nada pero como tengo imaginado la cosa se le otorga 1 movimiento a cada robot y luego se ejecutan todos y luego otro y asi, si la instruccion detecta una colision entonces le dice al robot que ejecute la funcion esperar. 

estado Robot::get_estado_robot() {
  return estado_robot;
}

numero Robot::get_numero_robot() {
  return numero_robot;
}
