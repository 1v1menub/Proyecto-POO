#ifndef funciones
#define funciones

#pragma once

#include <iostream>
#include "Almacen.h"
#include <windows.h>

void mostrarAlmacen(almacen* alm) {


	bool crobot = false;
	bool cslot = false;
	int cr = 0;
	int cs = 0;

	for (auto r : alm->get_pCasillas()) {
		for (auto c : r) {
			for (auto bot : alm->get_robots()) {
				if (c->get_pos() == bot->get_posicion_robot()) {
					crobot = true;
					cr++;
				}
			}
			for (auto slt : alm->get_slots()) {
				if (c->get_pos() == slt->get_posicion_slot()) {
					cslot = true;
					cs++;
				}
			}

			if (crobot == true) {
				std::cout << "(" << cr << ")";
				crobot = false;
			}

			else if (cslot == true) {
				std::cout << "[" << cs << "]";
				cslot = false;
			}

			else {
				std::cout << ".|.";
			}
		}
		std::cout << std::endl;
	}
}

void imprimirScore(almacen* alm) {
	for (int i = 0; i < alm->get_pCasillas().size(); i++) {
		for (int j = 0; j < alm->get_pCasillas()[i].size(); j++) {
			std::cout << alm->get_pCasillas()[i][j]->get_gscore() << " ";
		}
		std::cout << std::endl;
	}
}

void setScore(almacen* alm, casilla* cas) {

	coor xInicial = cas->get_pos()[0];
	coor yInicial = cas->get_pos()[1];
	int score = alm->get_pCasillas()[xInicial + 1][yInicial]->get_gscore();
	//Iniciar
	if (xInicial + 1 < alm->get_rows()) {
		alm->get_pCasillas()[xInicial + 1][yInicial]->set_gscore(score + 1);
	}
	if (xInicial - 1 >= 0) {
		alm->get_pCasillas()[xInicial - 1][yInicial]->set_gscore(score + 1);
	}
	if (yInicial + 1 < alm->get_rows()) {
		alm->get_pCasillas()[xInicial][yInicial + 1]->set_gscore(score + 1);
	}
	if (yInicial - 1 >= 0) {
		alm->get_pCasillas()[xInicial][yInicial - 1]->set_gscore(score + 1);
	}

}

vector<vector<coor>> pathFinder(Robot* inicio, Slot* fin, almacen* alm) {


	vector<vector<coor>> pasos;
	if (inicio->get_posicion_robot() == fin->get_posicion_slot()) {
		pasos.push_back(inicio->get_posicion_robot());
	}
	else {

	}
	return pasos;
}



#endif
