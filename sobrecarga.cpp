// SOBRECARGA DE OPERADORES
// a = 5, b = 7
// if(a>b) -> if(5>7)
// persona1.edad = 20 , persona2.edad = 18
// if(persona1 > persona2)
// se sobrecarga el operador (>) por el atributo edad
// if(persona1.edad > persona2.edad)
// Librerias

#include <iostream>
#include <string>
// std
using namespace std;
// clases
class Persona {
private:
    string nombre;
    int edad;
public:
    // Constructor
    Persona(string n, int e) : nombre(n), edad(e) {};

    // Mayor que (operator[operador a sobrecargar])
    bool operator>(const Persona& otra) const {
        return edad > otra.edad;
    }

    // Sobrecarga el operador == ()
};
// funciones


// principal
int main(){
    Persona p1("Carlos",25);
    Persona p2("Aaron", 22);

    cout<<"p1 > p2 = "<<(p1 > p2) <<endl; // true -> 1

    return 0;
}
