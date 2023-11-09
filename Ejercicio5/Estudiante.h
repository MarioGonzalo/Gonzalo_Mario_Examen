#include <iostream>
#include <vector>

#ifndef EJERCICIO5_ESTUDIANTE_H
#define EJERCICIO5_ESTUDIANTE_H


// Clase Estudiante
class Estudiante{
private:
    // Atributos estudiante
    std::vector<std::string> materias;
    int edad;
    std::string nombre;
    std::string grado;
public:
    // Constructor para inicializar los atributos
    Estudiante(int e, const std::string& n, const std::string& g){
        edad = e;
        nombre = n;
        grado = g;
    }
    // Metodo para mostrar la informacion
    void mostrar_info(){
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
    // Metodo para mostrar las materias
    void mostrar_materias(){
        std::cout << "Materias: " << std::endl;
        // Por cada materia se imprime una
        for (const auto& materia : materias) {
            std::cout << materia << std::endl;
        }
    }
    // Metodo para agregar materias
    void agregar_materia(const std::string& materia){
        materias.push_back(materia); // Se agrega la materia al vector de materias
    }
};


#endif //EJERCICIO5_ESTUDIANTE_H
