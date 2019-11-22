//proximamente :'v
//combalidaciones cin cout bienvenido numero de casilla,etc
#include "casilla.h"
#include "producto.h"
#include "robot.h"
#include "tipos.h"
#include "slot.h"
#include <iostream>
using namespace std;


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

