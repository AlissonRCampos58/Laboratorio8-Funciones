#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i; 
    }
    return resultado;
}

void mostrarFactoriales(int limite) {
    for (int i = 1; i <= limite; i++) {
        cout<< i <<"! = "<<factorial(i)<<endl;
    }
}

int main() {
    int limite;

    cout<<"Ingrese un limite: "<<endl;
    cin>>limite;

    mostrarFactoriales(limite);

    return 0;
}
