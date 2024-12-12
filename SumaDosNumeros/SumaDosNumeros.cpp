#include <iostream>
using namespace std;
// Función para sumar dos números
int suma(int a, int b) {
return a + b;
}
int main() {
int num1 = 5, num2 = 7; // Declaración e inicialización de dos números
int resultado = suma(num1, num2); // Llamada a la función suma con los dos números como argumentos
cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl; // Impresión del resultado de la suma
return 0;
}