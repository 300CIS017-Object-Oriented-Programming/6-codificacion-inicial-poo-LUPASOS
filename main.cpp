#include <iostream>
#include "Perro.h"
using namespace std;
int main() {

    std::cout << "Hello, World!" << endl;

    // Instanciar
    Perro firulais;
    firulais.nombre = "Firulais";
    firulais.color = "Negro";
    firulais.edad = 5;
    firulais.tamanio = "Grande";
    firulais.raza = "Mastin napolitano";

    cout << "Que ladre" << endl;
    firulais.ladrar();
    firulais.saludar();
    firulais.alimentar();


    Perro luna;
    luna.nombre = "Luna";
    luna.color = "Blanco";
    luna.edad = 2;
    luna.tamanio = "Pequeno";

    cout << "Que ladre" << endl;
    luna.ladrar();
    luna.saludar();
    luna.alimentar();

    return 0;
}
