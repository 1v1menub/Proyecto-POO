//
// Created by Mau on 11/1/19.
//

#ifndef PRODUCTO_PRODUCTO_H
#define PRODUCTO_PRODUCTO_H

#include <iostream>
using namespace std;
typedef string letra;

class Producto {
private: //atributos
    letra nombre;

public://metodos
    Producto(letra nom);
    //metodo de acceso
    letra get_nombre();
};


#endif //PRODUCTO_PRODUCTO_H
