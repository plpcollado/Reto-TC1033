#ifndef WHATSAPP_H
#define WHATSAPP_H
#include "Mensaje.h"
#include "Inventario.h"
#include "Cliente.h"
#include <string>

using namespace std; 
class WhatsApp{
  private:
    Mensaje mensajes[5];
    Cliente cliente;
    Inventario inventario;
  public: 
    WhatsApp();
    void agregarMensaje(Mensaje m, int pos);
    void agregarInventario(Inventario inventario);
    string obtenerInventario();
    void agregarCliente(Cliente cliente);
    string obtenerCliente();
};    
#endif
