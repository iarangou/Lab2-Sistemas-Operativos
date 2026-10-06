#include <iostream>

int main() {

    int numeros[4] = {10, 20, 30, 40};
    int* ptr = numeros;
    std::cout << "Valores iniciales:" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << *(ptr + i) << std::endl;
    }

    *(ptr + 2) = 100;
    std::cout << "Valores despues del cambio:" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << *(ptr + i) << std::endl;
    }
    std::cout << "Direccion del array: " << numeros << std::endl;
    std::cout << "Direccion guardada en ptr: " << ptr << std::endl;

    return 0;
}
