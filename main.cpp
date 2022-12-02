#include <iostream>
#include "WhatsApp.h"

using namespace std;

int main(){
  int opcion=0;
  int interopcion=0;
  Inventario inventario;
  Cliente cliente;
  string tecla;
  do{
    cout<<"Bienvenido al sistema, primero, ¿Eres una tienda o un cliente? 1) Tienda 2) Cliente 3) Salir"<<endl;
    int keyPressed;   
    cin>>keyPressed;
    switch(keyPressed) {
      case 1:
      cout<<"Bienvenido socio abarrotero, ¿Qué deseas hacer? 1) Cambiar estatus 2) Agregar producto 3) Salir"<< endl;
      int keyPressed2;
        cin>>keyPressed2;
        switch(keyPressed2) {
        case 1:
          cout<<"Actualmente su estado es: "<<inventario.getEstatus()<<endl;
          cout<<"Presione para abrir 1), para mantener 2)"<<endl;
          cin>>tecla;
          if (tecla == "1"){
            inventario.setEstatus("abierto");
            cout<<"La tienda ha sido abierta"<<endl;
          }
          break;
        case 2:
        cout<<"Dame el nombre del producto: "<<endl;
        string nombre;
        cin>>nombre;
        cout<<"Dame el costo del producto: "<<endl;
        double costo;
        cin>>costo;
        cout<<"Dame la cantidad a agregar: "<<endl;
        int cantidad;
        cin>>cantidad;
        cout<<"Dime la posicion para añadir el producto: "<<endl;
        int posicion;
        cin>>posicion; 

        Producto producto(nombre,cantidad,costo);
        inventario.agregarProducto(producto, posicion);
        
        break;
      }
      /*Caso cliente:
      int keyPressed2;
        cin>>keyPressed2;
        switch(keyPressed) {
          cout<<"Bienvenido cliente, ¿Cual es su nombre?";
            string nombre;
            cin>>nombre; 
            cout<<"Hola" string nombre".¿Que desea hacer? 1) Ver estado de la tienda. 2) Consultat producto"
              
        }


      case 2:*/
    }

    //acabar cuando el usuario presione 3 o utro numero
  }while(opcion!=0);
  return 0;
}