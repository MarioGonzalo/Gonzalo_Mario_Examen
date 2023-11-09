#include <iostream>
#include <set>

// Se define una excepción para cuando se intente registrar una materia que ya se encuentra registrada
class MateriaYaRegistrada : public std::exception {
public:
    const char* what() const noexcept override {
        return "La materia ya se encuentra registrada";
    }
};
// Se define una clase para registrar materias
class RegistroMaterias {
public:
    void registrarMateria(const std::string& materia) {
        // Simulación de un registro de materia
        if (materiasRegistradas.find(materia) != materiasRegistradas.end()) {
            throw MateriaYaRegistrada();
        } else {
            materiasRegistradas.insert(materia);
            std::cout << "Materia registrada: " << materia << std::endl;
        }
    }

private:
    std::set<std::string> materiasRegistradas;
};

int main() {
    RegistroMaterias registro;

    try {
        registro.registrarMateria("Matematicas");
        registro.registrarMateria("Fisica");
        registro.registrarMateria("Matematicas"); // Se vuelve a registrar la materia para generar la excepción
    } catch (const MateriaYaRegistrada& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl; // Se lanza la excepción
    }
    return 0;
}
