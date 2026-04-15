// Librerias
// TEMPLATES
// Crear una funcion que imprima el valor ingresado como parametro
// imprimir1 (string cadena) output -> cadena (STRING)
// imprimir2 (double valorpi) output -> pi (DOUBLE)
// imprimirG (T valor) output -> valor (T)
#include <iostream>
#include <string>
using namespace std;
// clases
template<typename T>
class Caja{
private:
    T valor;
    bool llena;
public:
    Caja() : llena(false){};

    void guardar(T item){
        valor = item;
        llena = true;
    }
    T obtener() const{
        if(llena == true) return valor;
        return T(); // valor por defecto
    }
};
// funciones

// principal
int main(){
    Caja<string> caja1;
    caja1.guardar("Hola, mundo!");
    string cajavalor;
    cajavalor = caja1.obtener();
    cout<<"El valor de la caja es: "<<cajavalor<<endl;
    
    return 0;
}
