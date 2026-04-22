// TEMPLATES -> clases y funciones
#include <iostream>
#include <string>
using namespace std;

// VARIADIC TEMPLATE
// E1
template <typename... Ts>
void imprimir_todo(Ts... args){
    ((std::cout << args << " "), ...);
}

// E2

template <typename T, typename... Rest>
void imprimir_cantidad(T valor1, Rest... paquete){
    std::cout<< "Los valores son: " << sizeof...(paquete) + 1;
}


// E3
// caso base
template <typename T>
void imprimir_todo2(T valor1) {
    std::cout << valor1 << " ";
}

// recursividad
template <typename T, typename... Rest>
void imprimir_todo2(T valor1, Rest... paquete){
    std::cout<< valor1 << " ";
    imprimir_todo2(paquete...);
}



int main() {
    imprimir_todo("Hola, Mundo!",200, 4.13); // hola mundo 200 4.13

    imprimir_cantidad("Itta","Hola, Mundo!",200, 4.13);

    imprimir_todo2("Itta","Hola, Mundo!",200, 4.13);

    return 0;
}
