#ifndef ROBOT_H
#define ROBOT_H

#include <vector>
#include <string>
#include "tipos.h"
#include "producto.h"

using namespace std;

class Robot {
  private:
    numero numero_robot;
    estado estado_robot;
    vector<coor> posicion_home;
    vector<coor> posicion_robot;
    Producto* contenido;
  public:
    Robot(numero numero_robot, estado estado_robot, coor x, coor y, vector<coor> posicion_robot, Producto* contenido);
    void set_Posicion_X(coor x);
	  void set_Posicion_Y(coor y);
    void depositar();
    void cargar(Producto* producto);
    void esperar();
    Producto* get_producto();
    estado get_estado_robot();
    numero get_numero_robot();
    vector<coor> get_posicion_robot();
};

#endif
