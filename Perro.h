#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Raza.h"
#include "Veterinario.h"

using namespace std;

class Perro {
private:
    string nombre;
    string color;
    int edad;
    string tamanio;
    Raza* razaPtr;
    Veterinario* vetPtr; // nuevo: puntero al veterinario tratante

public:
    Perro() : nombre(""), color(""), edad(0), tamanio(""), razaPtr(nullptr), vetPtr(nullptr) {}

    void ladrar();
    void saludar();
    void alimentar();

    // getters / setters básicos
    void setNombre(string n) { nombre = n; }
    string getNombre() { return nombre; }

    void setColor(string c) { color = c; }
    string getColor() { return color; }

    void setEdad(int e) { edad = e; }
    int getEdad() { return edad; }

    void setTamanio(string t) { tamanio = t; }
    string getTamanio() { return tamanio; }

    // Raza (asociación)
    void setRaza(Raza* r) { razaPtr = r; }
    Raza* getRaza() { return razaPtr; }
    void mostrarRaza();

    // Veterinario (asociación)
    void setVeterinario(Veterinario* v) { vetPtr = v; }
    Veterinario* getVeterinario() { return vetPtr; }
    void mostrarVeterinario();
};

#endif // PERRO_H
