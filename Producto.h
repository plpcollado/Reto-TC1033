#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using namespace std;

class Producto{
  private:  
    string nombre;
    int cantidad;
    double costo;
  public:
    Producto();
    Producto(string nombre, int cantidad, double costo);
    void setNombre(string nombre);
    string getNombre();
    void setCantidad(int cantidad);
    int getCantidad();
    void setCosto(double costo);
    double getCosto();
};
#endif