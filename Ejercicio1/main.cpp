#include <iostream>
//La función suma recibe dos números y devuelve la suma de ambos
int suma(){
    int a,b;
    std::cout<<"Ingrese el primer numero:";
    std::cin>>a;
    std::cout<<"Ingrese el segundo numero:";
    std::cin>>b;
    return a+b;
}

int main() {
    int resultado = suma();//Se almacena el resultado de la función suma en la variable resultado
    std::cout<<"La suma es:"<< resultado <<std::endl;//Se imprime el resultado
    return 0;
}
