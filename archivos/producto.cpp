//
// Created by Mau on 11/1/19.
//

#include "producto.h"

//constructor para inicializar los atributos
Producto::Producto(nombre nom) {
    n = nom;
}

//retornar el nombre
nombre Producto::get_nombre() {
    return n;
}



