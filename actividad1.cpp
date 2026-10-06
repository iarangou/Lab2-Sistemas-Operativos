#include <iostream>

int main() {

    int numero = 10;
    int* ptr = &numero;

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Direccion de numero: " << &numero << std::endl;
    std::cout << "Valor guardado en ptr: " << ptr << std::endl;
    std::cout << "Valor al que apunta ptr: " << *ptr << std::endl;
    *ptr = 25;

    std::cout << "Nuevo valor: " << numero << std::endl;
    std::cout << "Direccion de numero despues: " << &numero << std::endl;
    return 0;
}
