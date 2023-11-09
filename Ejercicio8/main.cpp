#include <iostream>
#include <vector>

// Definir una estructura para representar a un estudiante
struct Estudiante {
    std::string nombre;
    int grado;
};
// Se define una función para filtrar los estudiantes por grado
std::vector<Estudiante> filtrar_por_grado(const std::vector<Estudiante>& estudiantes, int grado) {
    std::vector<Estudiante> estudiantes_grado;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_grado.push_back(estudiante);
        }
    }

    return estudiantes_grado;
}

int main() {
    // Vector de estudiantes
    std::vector<Estudiante> estudiantes = {
            {"Juan", 10},
            {"María", 11,},
            {"Pedro", 10,}
    };

    // Filtrar estudiantes del grado requerido
    std::vector<Estudiante> estudiantes_grado= filtrar_por_grado(estudiantes, 10);

    // Imprimir los estudiantes filtrados
    for (const Estudiante& estudiante : estudiantes_grado) {
        std::cout << "Nombre: " << estudiante.nombre << ", Grado: " << estudiante.grado << std::endl;
    }

    return 0;
}
