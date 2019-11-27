#ifndef SLOT_H
#define SLOT_H


#include <vector>
#include <string>
#include "tipos.h"
#include "producto.h"

using namespace std;

class Slot {
  private:
    numero numero_slot;
    vector<coor> posicion_slot;
    cantidad capacidad;
    estado estado_slot;
    vector<Producto*> productos;
  public:
    Slot(numero numero_slot, vector<coor> posicion_slot, cantidad capacidad, estado estado_slot, vector<Producto*> productos);
    void agregar_producto(Producto* producto);
    void quitar_producto(Producto* producto);
    vector<Producto*> get_producto();
    cantidad get_capacidad();
    estado get_estado_slot();
    numero get_numero_slot();
    vector<coor> get_posicion_slot();
};

#endif
