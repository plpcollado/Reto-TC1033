#ifndef CLIENTE_H
#define ClIENTE_H 
#include <string>

using namespace std; 

class Cliente{
  private: 
    string nombre; 
    string solicitud;
  public:
    Cliente();
    Cliente(string nombre, string solicitud);
    void setNombre(string nombre);
    string getNombre();
    void setSolicitud(string solicitud);
    string getSolicitud();
};
#endif