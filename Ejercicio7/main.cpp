#include <iostream>
#include <string>

class Asistencia {
private:
    std::string fecha;
    std::string estado;

public:
    // Constructor para inicializar los atributos
    Asistencia(const std::string& fecha, const std::string& estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de la asistencia: " << estado << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Asistencia
    Asistencia asistencia("2023-11-09", "Asistió");
    asistencia.mostrar_asistencia();

    return 0;
}

