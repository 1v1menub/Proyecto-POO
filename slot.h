#include <vector>
#include <string>
#include "tipos.h"
#include "producto.h"

using namespace std;

class Slot {
  private:
    numero numero_slot;
    vector<coor> posicion_slot
    cantidad capacidad;
    estado estado_slot;
    vector<Producto> productos;
  public:
    Slot(numero numero_slot, vector<coor> posicion_slot, cantidad capacidad, estado estado_slot, vector<Producto> productos);
    void agregar_producto(Producto producto);
    void quitar_producto(nombre nombre_producto);
    estado get_estado_slot();
    numero get_numero_slot();
}