// LIBRERIAS
#include <iostream>
#include <string>
using namespace std;

// CLASES
// HERENCIA: una clase hereda los atributos de otra clase (clase padre -> clase hijo)
class Animal{
    public:
    string nombre;
    string raza;
    void mostrarInfo(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Raza: "<<raza<<endl;
    }
};

class Perro : public Animal{
    void ladrar(){
        cout<<"Guau"<<endl;
    }
};

// class Perro{
    // string nombre
    // string raza
// }

// POLIMORFISMO: mismo metodo -> diferente funcionalidad (VIRTUAL)

class Servivo{
public:
    string nombre;
    string tipo;

    void mostrarInfo(){
        cout<<"Su nombre es: "<<nombre<<endl;
        cout<<"Su tipo es: "<<tipo<<endl;
    }

    virtual void sonido(){
        cout<<"wow"<<endl;
    }
};

class Humano : public Servivo{
    void sonido() override {
        cout<<"Hola, mundo!"<<endl;
    }
};

class Gato :  public Servivo{
    void sonido() override {
        cout<<"miau"<<endl;
    }
};
// FUNCIONES


// PRINCIPAL
int main(){
    Servivo* aaron = new Humano();
    aaron->sonido();

    Servivo* gatito =  new Gato();
    gatito->sonido();
    return 0;
}
