#include <iostream>
#include <stdexcept>

// Función división
int division(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division entre cero");
    }
    return a / b;
}

int main() {
    // Se declaran las variables y se piden los datos
    int a, b;
    std::cout << "Ingrese el numerador: ";
    std::cin >> a;
    std::cout << "Ingrese el denominador: ";
    std::cin >> b;

    try {
        // Intenta ejecutar la función
        division(a, b);
    } catch (const std::runtime_error& e) {
        // Captura y maneja la excepción
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

