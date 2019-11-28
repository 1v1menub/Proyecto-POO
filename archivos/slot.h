#ifndef SLOT
#define SLOT


#include <vector>
#include <string>
#include "tipos.h"


using namespace std;

class Slot {
private:
	numero_t numero_slot;
	vector<coor> posicion_slot;
	nombre producto;
public:
	Slot(numero_t numero_slot, coor x, coor y);
	cantidad get_capacidad();
	numero_t get_numero_slot();
	vector<coor> get_posicion_slot();
	void set_pruducto(nombre prod);
	nombre get_producto();
};

#endif
