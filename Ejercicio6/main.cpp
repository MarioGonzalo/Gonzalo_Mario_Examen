#include <iostream>
#include <vector>

double promedioNotas(const std::vector<int>& calificaciones) {
    double suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast<double>(suma) / calificaciones.size();
}

int main() {
    std::vector<int> calificaciones = { 1, 2, 5, 0, 0 };
    std::cout << "El promedio de notas es: " << promedioNotas(calificaciones) << std::endl;
    return 0;
}
