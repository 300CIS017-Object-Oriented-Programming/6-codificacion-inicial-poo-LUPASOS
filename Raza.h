#ifndef RAZA_H
#define RAZA_H

#include <string>
using namespace std;

class Raza {
private:
    string nombre;
    string paisOrigen;

public:
    // constructores simples segun la ia, no lo tengo del to.do claro honestamente
    Raza() : nombre(""), paisOrigen("") {}
    Raza(string n, string p) : nombre(n), paisOrigen(p) {}

    // getters y setters supuestamente sencillos
    void setNombre(string n) { nombre = n; }
    string getNombre() { return nombre; }

    void setPaisOrigen(string p) { paisOrigen = p; }
    string getPaisOrigen() { return paisOrigen; }
};

#endif // RAZA_H
