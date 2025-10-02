//
// Created by lufe and Gonzo.
//

#include "Perro.h"
using namespace std;

void Perro::ladrar() {

    cout << " Esta ladrando " << nombre << ", tengo " << edad << " anios " << std::endl;
}

void Perro::saludar() {
    int veces = 5; // veces es una variable local
    for (int i = 0; i < veces; i++) {
       // Esta linea combina variables locales con atributos de instancia
        cout << nombre << " saluda." << std::endl;
    }
}


void Perro::alimentar() {
    float cantidad = 0.0; //Pedazo sacado con la IA para poder entender correctamente lo que se esta haciendo, los kilos a dar
    if (tamanio == "Grande") {
        cantidad = 1.0 * edad;
    }
    else if (tamanio == "Mediano") {
        cantidad = 0.5 * edad;
    }
    else {
        cantidad = 0.25 * edad;
    }

    cout << "A " << nombre       << " se le esta dando " <<cantidad << " kgs de comida" << endl;
}