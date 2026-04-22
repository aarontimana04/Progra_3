#include <iostream>
#include <string>
using namespace std;
// clases

// FUNCIONES

// principal
int main() {
  // CALLABLES
  // [captura](parametros) -> tipo{cuerpo de operacion}
  auto suma = [](int a, int b) { return a + b; };
  cout << suma(10, 20)<<endl;

  // captura por valor
  int numero = 22;
  auto capturarNum = [numero](int valor) { return numero * valor; };
  cout<< capturarNum(10)<<endl; // 220
  // captura por referencia &
  int contador = 0;
  cout << contador << endl; // 0
  auto incrementar = [&contador]() { contador++; };
  incrementar();
  cout << contador << endl; // 1
  incrementar();
  cout << contador << endl; // 2

  return 0;
}
