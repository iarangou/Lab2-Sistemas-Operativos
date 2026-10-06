#include <iostream>

void a_function() {
}

int main() {

    float value = 0.0;
    int* ptr = new int(10);

    std::cout << "TEXT / CODE" << std::endl;
    std::cout << "Direccion de main: " << (void*)&main << std::endl;
    std::cout << "Direccion de a_function: " << (void*)&a_function << std::endl;

    std::cout << std::endl;

    std::cout << "HEAP" << std::endl;
    std::cout << "Direccion en heap: " << ptr << std::endl;

    std::cout << std::endl;

    std::cout << "STACK" << std::endl;
    std::cout << "Direccion de value: " << &value << std::endl;

    delete ptr;

    return 0;
}
