#include <iostream>
#include "almacen.h"
#include "casilla.h"
#include "funciones.h"
#include "preset.cpp"
#include <fstream>




int main() {
	cout << "BIENVENIDO!" << endl;
	cout << "------------------------" << endl;
	cout << "Que desea hacer?" << endl;
	cout << "[1] Cargar preset" << endl;
	cout << "[2] Personalizado" << endl;
	int opcion;
	int opcion2;
	cin >> opcion;
	system("cls");
	if (opcion == 1) {
		cout << "Escoja una preset: " << endl;
		cout << "[1] Cueva" << endl;
		cout << "[2] Serpiente" << endl;
		cout << "[3] Desorden" << endl;
		cout << "[4] Inspirado" << endl;
		cout << "[5] Easter egg" << endl;
		cin >> opcion2;
		system("cls");
		if (opcion2 == 1) {
			preset1();
		}
		else if (opcion2 == 2) {
			preset2();
		}
		else if (opcion2 == 3) {
			preset3();
		}
		else if (opcion2 == 4) {
			preset4();
		}
		else if (opcion2 == 5) {
			preset5();
		}
	}
	if (opcion == 2) {
		//creacion del objeto -- en progreso
	   //combalidaciones
		int numero_robots = 0, filas = 0, columnas = 0, numero_slots = 0;
		
		//bienvenida al programa

		cout << "Ingrese el numero de columnas: ";
		cin >> filas;
		cout << "Ingrese el numero de filas: ";
		cin >> columnas;

		Almacen alm = Almacen(filas, columnas);
		Almacen* pAlm = &alm;

		//numero de robots
		cout << "Ingrese el numero de robots: ";
		cin >> numero_robots;
		//estableciendo la posicion de de cada uno de los robots

		vector<Robot> robots;
		for (int i = 0; i < numero_robots; i++)
		{
			int x = 0;
			int y = 0;
			cout << "Ingrese la posicion y del robot " << i+1 << ": ";
			cin >> x;
			cout << "Ingrese la posicion x del robot " << i+1 << ": ";
			cin >> y;
			robots.emplace_back(Robot(i, x, y));
			pAlm->add_robot(&robots[i]);
		}
		//numero de slots
		cout << "Ingrese el numero de slots: ";
		cin >> numero_slots;
		//estableciendo la posicion de de cada uno de los robots

		vector<Slot> slots;
		for (int i = 0; i < numero_slots; i++)
		{
			int x = 0, y = 0;
			cout << "Ingrese el posicion y del slot " << i+1 << ": ";
			cin >> x;
			cout << "Ingrese la posicion x del slot " << i+1 << ": ";
			cin >> y;
			slots.emplace_back(Slot(i, x, y));
			pAlm->add_slot(&slots[i]);
		}
		//Accion a realizar
		mostrarAlmacen(pAlm);

		int nrobot = 0;
		int nslot = 0;
		string producto;
		cout << "Que robot desea que realize una accion? " << endl;
		cin >> nrobot;
		cout << "Que pruducto desea que transporte? " << endl;
		cin >> producto;
		cout << "A que slot desea que lo lleve? " << endl;
		cin >> nslot;

		int xInicial = 0;
		int yInicial = 0;
		int xFinal = 0;
		int yFinal = 0;

		for (int i = 0; i < pAlm->get_robots().size(); i++) {
			if (nrobot == i) {
				xInicial = pAlm->get_robots()[i]->get_posicion_robot()[0];
				yInicial = pAlm->get_robots()[i]->get_posicion_robot()[1];
			}
		}

		for (int i = 0; i < pAlm->get_slots().size(); i++) {
			if (nslot == i) {
				xFinal = pAlm->get_slots()[i]->get_posicion_slot()[0];
				yFinal = pAlm->get_slots()[i]->get_posicion_slot()[1];
			}
		}

		pAlm->get_robots()[xInicial][yInicial].set_producto(producto);
		Robot* pRobot = &pAlm->get_robots()[xInicial][yInicial];
		Slot* pSlot = &pAlm->get_slots()[xFinal][yFinal];
		system("cls");
		entrega(pRobot, pSlot, pAlm);
		
		//Crea un archivo escribe el path
		ofstream myfile;
		vector<vector<coor>>matrix = pathFinder(pRobot, pSlot, pAlm);
		myfile.open("Pasos.txt");
		myfile << "Path: {";
		for (int i = 0; i < matrix.size(); i++) {
			myfile << "(" << matrix[i][0] << ", " << matrix[i][1] << " ), ";
		}
		myfile << "} \n";
		myfile.close();
	}
}

