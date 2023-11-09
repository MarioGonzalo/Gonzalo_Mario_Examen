#include <iostream>
#include "Estudiante.h"

int main() {
    Estudiante estudiante1(20, "Juan", "Ingenieria"); // Se crea un objeto de la clase Estudiante
    estudiante1.agregar_materia("Matematicas");
    estudiante1.agregar_materia("Fisica");
    estudiante1.mostrar_materias(); // Se llama al metodo mostrar_materias para mostrar las materias
    estudiante1.mostrar_info(); // Se llama al metodo mostrar_info para mostrar la informacion
    return 0;
}