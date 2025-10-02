#include "Perro.h"
#include <iostream>
using namespace std;

void Perro::ladrar() {
    cout << "Esta ladrando " << nombre << " tengo " << edad << " anios" << endl;
}

void Perro::saludar() {
    int veces = 3;
    for (int i = 0; i < veces; i++) {
        cout << nombre << " saluda." << endl;
    }
}

void Perro::alimentar() {
    float cantidad = 0.0f;
    if (tamanio == "Grande" || tamanio == "grande") {
        cantidad = 1.0f * edad;
    } else if (tamanio == "Mediano" || tamanio == "mediano") {
        cantidad = 0.5f * edad;
    } else {
        cantidad = 0.25f * edad;
    }
    cout << "Alimentando a " << nombre << ": " << cantidad << " kg." << endl;
}

void Perro::mostrarRaza() {
    if (razaPtr != nullptr) {
        cout << "Raza: " << razaPtr->getNombre()
             << " (Pais: " << razaPtr->getPaisOrigen() << ")" << endl;
    } else {
        cout << nombre << " no tiene raza asignada." << endl;
    }
}

void Perro::mostrarVeterinario() {
    if (vetPtr != nullptr) {
        cout << "Veterinario: " << vetPtr->getNombre()
             << " (Experiencia: " << vetPtr->getAniosExperiencia() << " anios)" << endl;
    } else {
        cout << nombre << " no tiene veterinario asignado." << endl;
    }
}
