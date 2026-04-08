
// LIBRERIAS
#include <iostream>
#include <string>
using namespace std;

// CLASES
class Alumno{
public:
    string nombre;
    int edad;
    string apellido;

    void mostrarInfo(){
        cout<<"Mi nombre es: "<<nombre<<endl;
        cout<<"Mi edad es: "<<edad<<endl;
        cout<<"Mi apellido es: "<<apellido<<endl;
    }
};

// FUNCIONES


// PRINCIPAL
int main(){
    Alumno Itta;
    Itta.nombre = "Itta";
    Itta.edad = 18;
    Itta.apellido = "Saavedra";

    //Itta.mostrarInfo();

    Alumno aaron;
    aaron.nombre = "aaron";
    aaron.edad = 22;
    aaron.apellido = "timana";

    aaron.mostrarInfo();


    return 0;
}
