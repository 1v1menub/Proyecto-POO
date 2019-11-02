#include "tipos.h"
#include "casilla.h"
#include "robot.h"
#include "slot.h"
#include <vector>

class almacen {
private:
	longitud height;
	longitud width;
	cantidad rows;
	cantidad cols;
	std::vector<std::vector<casilla>> casillas;


	std::vector<robot> robots;
	std::vector<slot> slots;
public:
	almacen(longitud h, longitud w, cantidad r, cantidad c);
	void add_robot(robot r);
	void add_slot(slot s);
};
