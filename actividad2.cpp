#include <iostream>

int main() {

    int numero = 10;
    int* ptr = &numero;

    std::cout << "Valor inicial: " << numero << std::endl;
    std::cout << "Direccion de numero: " << &numero << std::endl;
    std::cout << "Direccion guardada en ptr: " << ptr << std::endl;
    *ptr = 20;

    std::cout << "Valor despues de modificar con puntero: "
              << numero << std::endl;

    int& referencia = numero;
    referencia = 30;

    std::cout << "Valor despues de modificar con referencia: "
              << numero << std::endl;
    std::cout << "Direccion de la referencia: "
              << &referencia << std::endl;

    return 0;
}
