#include "producto.h"
void programa()
{
    //definicion de variables
    letra N;
    cout<<"Ingrese el nombre del robot: ";
    cin>>N;
    //creacion del objeto
    Producto c(N);
    //
    cout<<"El nombre del robot es: "<<c.get_nombre()<<endl;
}

int main() {
    programa();
}