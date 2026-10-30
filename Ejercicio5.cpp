#include <iostream>
using namespace std;

// Calcula el factorial de n usando un ciclo
int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;  // resultado = resultado * i
    }
    return resultado;
}

// Muestra el factorial de todos los números del 1 al limite
void mostrarFactoriales(int limite) {
    for (int i = 1; i <= limite; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
}

int main() {
    int limite;

    cout << "Ingrese un limite: ";
    cin >> limite;

    mostrarFactoriales(limite);

    return 0;
}
