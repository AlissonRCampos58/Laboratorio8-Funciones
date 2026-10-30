#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius){
     float fahrenheit= celsius * 9 / 5 + 32;
     return fahrenheit;
}

int main(){
    float temperatura;
    cout<<"Ingrese la temperatura: "<<endl;
    cin>>temperatura;

    temperatura = celsiusAFahrenheit(temperatura);
    cout << "La temperatura esta a "<<temperatura<<" grados Fahrenheit."<<endl;
    
    return 0;
}