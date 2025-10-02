//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>
using namespace std;

class Perro {

public:
    string nombre;
    string color;
    int edad;
    string tamanio;
    string raza;

public:
    void ladrar();
    void saludar();
    void alimentar ();


    /* pedazdo del segundo ejercicio, me tiene que dar error obligatoriamente

    void setNombre(const string &n) { nombre = n; }
    string getNombre() const { return nombre; }

    void setColor(const string &c) { color = c; }
    string getColor() const { return color; }

    void setEdad(int e) { edad = e; }
    int getEdad() const { return edad; }

    void setTamanio(const string &t) { tamanio = t; }
    string getTamanio() const { return tamanio; }

    void setRaza(const string &r) { raza = r; }
    string getRaza() const { return raza; }
    */

};

#endif //INC_1_CLASEOBJETO_PERRO_H
