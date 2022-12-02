#include <iostream>
#include "Producto.h"
#ifndef INVENTARIO_H
#define INVENTARIO_H 


using namespace std; 

class Inventario{
  private: 
    string estatus;
    Producto productos[20];
  public: 
    Inventario();
    Inventario(string estatus);
    void setEstatus (string estatus);
    string getEstatus();
    void agregarProducto(Producto p, int position);
};
#endif