#ifndef MENSAJE_H
#define MENSAJE_H
#include <string>

using namespace std;

class Mensaje{
  private:
    string tipo;
    string fecha;
    string hora;
  public:
    Mensaje();
    Mensaje(string tipo, string fecha, string hora);
    void setTipo(string tipo);
    string getTipo();
    void setFecha(string fecha);
    string getFecha();
    void setHora(string hora);
    string getHora();
};
#endif