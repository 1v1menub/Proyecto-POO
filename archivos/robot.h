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
    Robot(numero numero_robot, estado estado_robot, vector<coor> posicion_home, vector<coor> posicion_robot, Producto* contenido);
    void avanzar_x(vector<coor> destino);
    void avanzar_y(vector<coor> destino);
    void retroceder_x(vector<coor> destino);
    void retroceder_y(vector<coor> destino);
    void depositar();
    void cargar(Producto* producto);
    void esperar();
    Producto* get_producto();
    estado get_estado_robot();
    numero get_numero_robot();
    vector<coor> get_posicion_robot();
};

#endif
