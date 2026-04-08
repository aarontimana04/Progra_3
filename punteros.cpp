// 8. Promedio hasta cero 
// Entrada: Secuencia de números reales; termina cuando se ingresa 0. 
// Proceso: Usar ciclo para sumar y contar mientras el valor ≠ 0; al final calcular promedio = suma / cantidad. 
// Salida: Promedio de los valores (si cantidad > 0). 

#include <iostream>
#include <string>
using namespace std;






int main(){
    // Variables
    int numero = 15; // xqw23456789
    string cadena = "Hola";


    // Punteros
    int* ptr_numero = &numero; // ptr_numero = xqw23456789; BIEN
                               // ptr_numero = 15; MAL

    cout<<*ptr_numero<<endl; // 15
    cout<<numero<<endl; // 15
    cout<<&ptr_numero<<endl; // direccion
    cout<<&numero<<endl; // direccion


    return 0;
}
