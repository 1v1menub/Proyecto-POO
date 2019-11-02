#include "slot.h"
#include <iostream>

Slot::Slot(numero _numero_slot, vector<coor> _posicion_slot, cantidad _capacidad, estado _estado_slot, vecotr<Producto> _productos) {
  numero_slot = _numero_slot;
  posicion_slot = _posicion_slot;
  capacidad = _capacidad;
  estado_slot = _estado_slot;
  productos = _productos;
}

void Slot::agregar_producto(Producto producto) {
  if(estado_slot == false) {
    productos.push_back(get_nombre());
    if(productos.size() = capacidad) {
      estado_slot = true;
    }
  }
  else {
    cout << "El slot esta lleno";
  }
}

void Slot::quitar_producto(nombre nombre_producto) {
  for(int i = 0; i < productos.size; i++) {
    if(productos[i] == nombre_producto) {
      productos.erase(productos.begin() + i);
      break
    }
  }
}

estado Slot::get_estado_slot() {
  return estado_slot;
}

numero Slot::get_numero_slot() {
  return numero_slot;
}

vector<coor> Slot::get_posicion_slot() {
  return posicion_slot;
}
