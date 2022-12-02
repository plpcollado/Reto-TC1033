#include "Inventario.h"
#include <iostream>

Inventario::Inventario(){
  estatus="Cerrado";
}
Inventario::Inventario(string estatus){
  this->estatus=estatus;
}
void Inventario::setEstatus(string estatus){
  this->estatus=estatus;
}
string Inventario::getEstatus(){
  return estatus;
}
void Inventario::agregarProducto(Producto p, int position){
  productos[position]=p;
}