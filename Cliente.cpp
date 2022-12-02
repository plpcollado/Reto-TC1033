#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(){
  nombre="Sin nombre";
  solicitud="Vacía";      
}
Cliente::Cliente(string nombre, string solicitud){
  this->nombre=nombre;
  this->solicitud=solicitud;
}
void Cliente::setNombre(string nombre){
  this->nombre=nombre;
}
string Cliente::getNombre(){
  return nombre;
}
void Cliente::setSolicitud(string solicitud){
  this->solicitud=solicitud;
}
string Cliente::getSolicitud(){
  return solicitud;
}
