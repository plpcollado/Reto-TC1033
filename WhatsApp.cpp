#include "WhatsApp.h"
#include <iostream>

WhatsApp::WhatsApp(){
  
}
void WhatsApp::agregarMensaje(Mensaje m, int pos){
  mensajes[pos]=m;
}
void WhatsApp::agregarInventario(Inventario inventario){
  this->inventario=inventario;
}
//void WhatsApp::