#include <iostream>
// Clase Estudiante
class Estudiante{
private:
    // Atributos estudiante
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
};
int main() {
    Estudiante estudiante1(20, "Juan", "Ingenieria"); // Se crea un objeto de la clase Estudiante
    estudiante1.mostrar_info(); // Se llama al metodo mostrar_info para mostrar la informacion
    return 0;
}
