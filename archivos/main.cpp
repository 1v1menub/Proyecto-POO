//proximamente :'v
//combalidaciones cin cout bienvenido numero de casilla,etc
#include "casilla.h"
#include "producto.h"
#include "robot.h"
#include "tipos.h"
#include "slot.h"
#include "funciones.h"
#include <iostream>
using namespace std;

/*  EJEMPLO DONDE SE CREA UN ALMACEN DE LA SIGUIENTE MANERA:
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|.(1).|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|.[1][2][3].|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|.[4].|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    Se busca el camino mas corto del robot 1 al slot 4, e imprime 
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    .|..|..|.(1).|..|..|..|..|..|..|.
    .|..|..|. o .|..|..|..|..|..|..|.
    .|..|..|. o .|..|..|..|..|..|..|.
    .|..|..|. o .|..|..|..|..|..|..|.
    .|..|..|. o [5][6][7].|..|..|..|.
    .|..|..|. o .|..|..|..|..|..|..|.
    .|..|..|. o  o  o  o  o [14].|..|.
    .|..|..|..|..|..|..|..|..|..|..|.
    
Almacen alm = Almacen(10, 11);
Almacen* pAlm = &alm;

int main() {

	Robot robot1 = Robot(1, 2, 3);
	Robot* Probot1 = &robot1;

	Slot slot1 = Slot(1, 8, 8);
	Slot* Pslot1 = &slot1;

	Slot slot2 = Slot(1, 6, 6);
	Slot* Pslot2 = &slot2;
	Slot slot3 = Slot(1, 6, 5);
	Slot* Pslot3 = &slot3;
	Slot slot4 = Slot(1, 6, 4);
	Slot* Pslot4 = &slot4;

	alm.add_robot(Probot1);
	coor posxi = robot1.get_posicion_robot()[0];
	coor posxj = robot1.get_posicion_robot()[1];

	alm.add_slot(Pslot1);
	alm.add_slot(Pslot2);
	alm.add_slot(Pslot3);
	alm.add_slot(Pslot4);

	pAlm->get_pCasillas()[Pslot1->get_posicion_slot()[0]][Pslot1->get_posicion_slot()[1]]->set_gscore(0);
	setScore(pAlm, pAlm->get_pCasillas()[Pslot1->get_posicion_slot()[0]][Pslot1->get_posicion_slot()[1]]);

	mostrarAlmacen(pAlm);

	imprimirMatriz(pathFinder(Probot1, Pslot1, pAlm));
	mostrarAlmacenPath(pAlm, pathFinder(Probot1, Pslot1, pAlm));

}
*/

int main(){
    //creacion del objeto -- en progreso
    //combalidaciones
    int numero_robots,filas,columnas;
    int x,y;
    //bienvenida al programa
    cout<<"Bienvenido!"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Ingrese el numero de filas :";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    //-->creacion de la casilla
    cin>>columnas;
    //numero de robots
    cout<<"Ingrese el numero de robots: ";
    cin>>numero_robots;
    //estableciendo la posicion de de cada uno de los robots
    for(int i=0; i<numero_robots; i++)
    {
        cout<<"Ingrese el posicion x del robot: ";
        cin>>x;
        cout<<"Ingrese la posicion y del robot: ";
        cin>>y;
    }
    //para que se pueda realizar las acciones es necesario haber creado al objeto(en pogreso)

