#include "Mensaje.h"
#include <iostream>

Mensaje::Mensaje(){
  tipo="Sin tipo";
  fecha="Sin fecha";
  hora="Sin hora";
}
Mensaje::Mensaje(string tipo, string fecha, string hora){
  this->tipo=tipo;
  this->fecha=fecha;
  this->hora=hora;
}
string Mensaje::getTipo(){
  return tipo;
}
void Mensaje::setTipo(string tipo){
  this->tipo=tipo;
}
string Mensaje::getFecha(){
  return fecha;
}
void Mensaje::setFecha(string fecha){
  this->fecha=fecha;
}
string Mensaje::getHora(){
  return hora;
}
void Mensaje::setHora(string hora){
  this->hora=hora;
}