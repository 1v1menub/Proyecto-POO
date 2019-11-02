//
// Created by Mau on 11/1/19.
//

#ifndef PRODUCTO_PRODUCTO_H
#define PRODUCTO_PRODUCTO_H

#include <iostream>
#include "tipos.h"
using namespace std;

class Producto {
private: //atributos
    nombre n;

public://metodos
    Producto(nombre nom);
    //metodo de acceso
    nombre get_nombre();
};


#endif //PRODUCTO_PRODUCTO_H
