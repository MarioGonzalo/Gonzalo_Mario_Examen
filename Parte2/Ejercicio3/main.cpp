#include <iostream>
// Función que intercambia los valores de dos variables a y b
void intercambio(int *a, int *b) {
    int punt = *a;
    *a = *b;
    *b = punt;
}
int main() {
    // Se declaran las dos variables a y b
    int a = 5, b = 10;

    // Se imprimen los valores de a y b antes del intercambio
    std::cout<< "Antes del intercambio:"<<std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;

    intercambio(&a, &b);//Se intercambian los valores de a y b

    // Se imprimen los valores de a y b después del intercambio
    std::cout<< "Después del intercambio:"<<std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}
