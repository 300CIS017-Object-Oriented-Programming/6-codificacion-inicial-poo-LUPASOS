#include <iostream>
#include "Raza.h"
#include "Veterinario.h"
#include "Perro.h"
using namespace std;

int main() {
    // crear razas
    Raza mastin("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");

    // crear veterinarios
    Veterinario drPerez("Dr. Perez", 12);
    Veterinario draLopez("Dra. Lopez", 5);

    // crear perros
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza(&mastin);

    Perro luna;
    luna.setNombre("Luna");
    luna.setColor("Blanco");
    luna.setEdad(2);
    luna.setTamanio("Pequeno");
    luna.setRaza(&maltes);

    // asociar veterinarios
    firulais.setVeterinario(&drPerez);
    luna.setVeterinario(&draLopez);

    // probar
    firulais.ladrar();
    firulais.mostrarRaza();
    firulais.mostrarVeterinario();

    cout << "----" << endl;

    luna.ladrar();
    luna.mostrarRaza();
    luna.mostrarVeterinario();

    return 0;
}
