#include <iostream>
#include <vector>

// Clase Profesor
class Profesor{
private:
    // Atributos profesor
    std::string materia;
    int edad;
    std::string nombre;
    int anos_experiencia;
public:
    // Constructor para inicializar los atributos
    Profesor(const std::string& m, int e, const std::string& n, int a){
        materia = m;
        edad = e;
        nombre = n;
        anos_experiencia = a;
    }
    // Metodo para mostrar la informacion
    void mostrar_info_profesor(){
        std::cout << "Materia: " << materia << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Años de experiencia: " << anos_experiencia << std::endl;
    }
};
int main() {
    // Crear un objeto de la clase Profesor
    Profesor profesor("Matematicas", 20, "Juan", 3);
    profesor.mostrar_info_profesor();
    return 0;
}
