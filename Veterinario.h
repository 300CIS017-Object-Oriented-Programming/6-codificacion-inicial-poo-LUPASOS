#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
using namespace std;

class Veterinario {
private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario() : nombre(""), aniosExperiencia(0) {}
    Veterinario(string n, int a) : nombre(n), aniosExperiencia(a) {}

    void setNombre(string n) { nombre = n; }
    string getNombre() { return nombre; }

    void setAniosExperiencia(int a) { aniosExperiencia = a; }
    int getAniosExperiencia() { return aniosExperiencia; }
};

#endif // VETERINARIO_H
