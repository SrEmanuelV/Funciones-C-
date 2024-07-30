#include <iostream>

using namespace std;

// Función para sumar dos números
int sumar(int a, int b) {
    return a + b;
}

// Función para restar dos números
int restar(int a, int b) {
    return a - b;
}

// Función para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

// Función para dividir dos números
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: No se puede dividir por cero.";
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2;

    // Solicitar entrada de los números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Mostrar resultados en pantalla, cada operación en una línea diferente
    cout << "Suma: " << sumar(num1, num2) << endl;
    cout << "Resta: " << restar(num1, num2) << endl;
    cout << "Multiplicación: " << multiplicar(num1, num2) << endl;
    cout << "División: " << dividir(num1, num2) << endl;

    return 0;
}
