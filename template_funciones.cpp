// TEMPLATES -> clases y funciones
#include <iostream>
#include <string>
using namespace std;
// clases


// FUNCIONES
// funcion especializada
int calcularArea(int base, int altura){
    return base*altura;
}

double calcularPerimetro(double base, double altura){
    return base*altura;
}

// funciones genericas
// De un solo parametro
template <typename T> // -> T, int, string, bool, double, char, etc
void imprimir(T valor){
    cout<<"El valor ingresado es: "<<valor<<endl;
}

// multiparametro
template <typename G, typename H>
auto calcular_area(G valor1, H valor2){
    return valor1*valor2;
}

// Non-type
template <typename L, size_t N>
size_t obtener_tam(L (&arr)[N]){
    return N;
}

// principal
int main(){

    int numeros[] = {1,2,3,4,5};
    obtener_tam(numeros); // retorna 5
    
    return 0;
}
