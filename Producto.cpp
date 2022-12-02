#include "Producto.h"
#include <iostream>

using namespace std;

Producto::Producto(){
  nombre="Sin nombre";
  cantidad=0;
  costo=0.0;
}
Producto::Producto(string nombre, int cantidad, double costo){
  this->nombre=nombre;
  this->cantidad=cantidad;
  this->costo=costo;
}
void Producto::setNombre(string nombre){
  this->nombre=nombre;
}
string Producto::getNombre(){
  return nombre;
}
void Producto::setCantidad(int cantidad){
  this->cantidad=cantidad;
}
int Producto::getCantidad(){
  return cantidad;
}
void Producto::setCosto(double costo){
  this->costo=costo;
}
double Producto::getCosto(){
  return costo;
}