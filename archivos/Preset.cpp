#include <iostream>
#include "Almacen.h"
#include "Casilla.h"
#include "funciones.h"

void preset1() {
	
	Almacen alm = Almacen(10, 11);
	Almacen* pAlm = &alm;

	Robot robot1 = Robot(1, 4, 5);
	Robot* Probot1 = &robot1;

	Slot slot1 = Slot(1, 9, 5);
	Slot* Pslot1 = &slot1;

	
	Slot slot2 = Slot(2, 2, 3);
	Slot* Pslot2 = &slot2;
	Slot slot3 = Slot(3, 3, 3);
	Slot* Pslot3 = &slot3;
	Slot slot4 = Slot(2, 4, 3);
	Slot* Pslot4 = &slot4;
	Slot slot5 = Slot(3, 5, 3);
	Slot* Pslot5 = &slot5;
	Slot slot6 = Slot(2, 6, 3);
	Slot* Pslot6 = &slot6;
	Slot slot7 = Slot(2, 6, 4);
	Slot* Pslot7 = &slot7;
	Slot slot8 = Slot(3, 6, 5);
	Slot* Pslot8 = &slot8;
	Slot slot9 = Slot(2, 6, 6);
	Slot* Pslot9 = &slot9;
	Slot slot10 = Slot(3, 6, 7);
	Slot* Pslot10 = &slot10;
	Slot slot11 = Slot(2, 5, 7);
	Slot* Pslot11 = &slot11;
	Slot slot12 = Slot(2, 4, 7);
	Slot* Pslot12 = &slot12;
	Slot slot13 = Slot(2, 3, 7);
	Slot* Pslot13 = &slot13;
	Slot slot14 = Slot(2, 2, 7);
	Slot* Pslot14 = &slot14;


	



	alm.add_robot(Probot1);
	coor posxi = robot1.get_posicion_robot()[0];
	coor posxj = robot1.get_posicion_robot()[1];

	Probot1->set_producto("USB");



	alm.add_slot(Pslot1);
	alm.add_slot(Pslot2);
	alm.add_slot(Pslot3);
	alm.add_slot(Pslot4);
	alm.add_slot(Pslot5);
	alm.add_slot(Pslot6);
	alm.add_slot(Pslot7);
	alm.add_slot(Pslot8);
	alm.add_slot(Pslot9);
	alm.add_slot(Pslot10);
	alm.add_slot(Pslot11);
	alm.add_slot(Pslot12);
	alm.add_slot(Pslot13);
	alm.add_slot(Pslot14);



	mostrarAlmacen(pAlm);
	string continuar;
	std::cout << std::endl << "Escriba 1 para continuar...";
	cin >> continuar;
	system("cls");
	entrega(Probot1, Pslot1, pAlm);
}

void preset2() {

	Almacen alm = Almacen(10, 11);
	Almacen* pAlm = &alm;

	Robot robot1 = Robot(1, 1, 0);
	Robot* Probot1 = &robot1;

	Slot slot1 = Slot(1, 5, 10);
	Slot* Pslot1 = &slot1;

	Slot slot17 = Slot(0, 0, 2);
	Slot* Pslot17 = &slot17;
	Slot slot16 = Slot(1, 1, 2);
	Slot* Pslot16 = &slot16;
	Slot slot21 = Slot(1, 7, 2);
	Slot* Pslot21 = &slot21;
	Slot slot22 = Slot(1, 8, 2);
	Slot* Pslot22 = &slot22;
	Slot slot2 = Slot(2, 2, 2);
	Slot* Pslot2 = &slot2;
	Slot slot3 = Slot(3, 3, 2);
	Slot* Pslot3 = &slot3;
	Slot slot4 = Slot(2, 4, 2);
	Slot* Pslot4 = &slot4;
	Slot slot5 = Slot(3, 5, 2);
	Slot* Pslot5 = &slot5;
	Slot slot6 = Slot(2, 6, 2);
	Slot* Pslot6 = &slot6;

	Slot slot7 = Slot(2, 2, 4);
	Slot* Pslot7 = &slot7;
	Slot slot8 = Slot(3, 3, 4);
	Slot* Pslot8 = &slot8;
	Slot slot9 = Slot(2, 4, 4);
	Slot* Pslot9 = &slot9;
	Slot slot10 = Slot(3, 5, 4);
	Slot* Pslot10 = &slot10;
	Slot slot11 = Slot(2, 6, 4);
	Slot* Pslot11 = &slot11;
	Slot slot18 = Slot(2, 7, 4);
	Slot* Pslot18 = &slot18;
	Slot slot19 = Slot(2, 8, 4);
	Slot* Pslot19 = &slot19;
	Slot slot20 = Slot(2, 9, 4);
	Slot* Pslot20 = &slot20;

	Slot slot23 = Slot(0, 0, 6);
	Slot* Pslot23 = &slot23;
	Slot slot24 = Slot(1, 1, 6);
	Slot* Pslot24 = &slot24;
	Slot slot12 = Slot(2, 2, 6);
	Slot* Pslot12 = &slot12;
	Slot slot13 = Slot(3, 3, 6);
	Slot* Pslot13 = &slot13;
	Slot slot14 = Slot(2, 4, 6);
	Slot* Pslot14 = &slot14;
	Slot slot15 = Slot(3, 5, 6);
	Slot* Pslot15 = &slot15;
	Slot slot25 = Slot(3, 6, 6);
	Slot* Pslot25 = &slot25;
	Slot slot26 = Slot(3, 7, 6);
	Slot* Pslot26 = &slot26;
	Slot slot27 = Slot(3, 8, 6);
	Slot* Pslot27 = &slot27;

	Slot slot28 = Slot(0, 9, 8);
	Slot* Pslot28 = &slot28;
	Slot slot29 = Slot(1, 1, 8);
	Slot* Pslot29 = &slot29;
	Slot slot30 = Slot(2, 2, 8);
	Slot* Pslot30 = &slot30;
	Slot slot31 = Slot(3, 3, 8);
	Slot* Pslot31 = &slot31;
	Slot slot32 = Slot(2, 4, 8);
	Slot* Pslot32 = &slot32;
	Slot slot33 = Slot(3, 5, 8);
	Slot* Pslot33 = &slot33;
	Slot slot34 = Slot(3, 6, 8);
	Slot* Pslot34 = &slot34;
	Slot slot35 = Slot(3, 7, 8);
	Slot* Pslot35 = &slot35;
	Slot slot36 = Slot(3, 8, 8);
	Slot* Pslot36 = &slot36;
	

	alm.add_robot(Probot1);
	coor posxi = robot1.get_posicion_robot()[0];
	coor posxj = robot1.get_posicion_robot()[1];
	
	Probot1->set_producto("USB");
	


	alm.add_slot(Pslot1);
	alm.add_slot(Pslot2);
	alm.add_slot(Pslot3);
	alm.add_slot(Pslot4);
	alm.add_slot(Pslot5);
	alm.add_slot(Pslot6);
	alm.add_slot(Pslot7);
	alm.add_slot(Pslot8);
	alm.add_slot(Pslot9);
	alm.add_slot(Pslot10);
	alm.add_slot(Pslot11);
	alm.add_slot(Pslot12);
	alm.add_slot(Pslot13);
	alm.add_slot(Pslot14);
	alm.add_slot(Pslot15);
	alm.add_slot(Pslot16);
	alm.add_slot(Pslot17);
	alm.add_slot(Pslot18);
	alm.add_slot(Pslot19);
	alm.add_slot(Pslot20);
	alm.add_slot(Pslot21);
	alm.add_slot(Pslot22);
	alm.add_slot(Pslot23);
	alm.add_slot(Pslot24);
	alm.add_slot(Pslot25);
	alm.add_slot(Pslot26);
	alm.add_slot(Pslot27);
	alm.add_slot(Pslot28);
	alm.add_slot(Pslot29);
	alm.add_slot(Pslot30);
	alm.add_slot(Pslot31);
	alm.add_slot(Pslot32);
	alm.add_slot(Pslot33);
	alm.add_slot(Pslot34);
	alm.add_slot(Pslot35);
	alm.add_slot(Pslot36);

	
	mostrarAlmacen(pAlm);
	string continuar;
	std::cout << std::endl << "Escriba 1 para continuar..." << std::endl;;
	cin >> continuar;
	system("cls");
	entrega(Probot1, Pslot1, pAlm);

	
}
