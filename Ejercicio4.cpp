#include <iostream>
using namespace std;

float sumar(float a, float b){
    return a + b;
}
float restar(float a, float b){
    return a - b;
}
float multiplicar(float a, float b){
    return a * b;
} 
float dividir(float a, float b){
    float div=0;
    if(b!=0){
        div=a/b;
        cout<<"Resultado: "<<div<< endl;  
    }else{
        cout<<"Math ERROR. El divisor no puede ser 0."<<endl;
    }
    return div;     
}

int main(){
    int opcion;
    float n1, n2;

    cout<<"---------Calculadora--------"<<endl<<endl;
    cout<<"1.Suma"<<endl;
    cout<<"2.Resta"<<endl;
    cout<<"3.Multiplicacion"<<endl;
    cout<<"4.Division"<<endl<<endl;

    cout<<"Ingrese la opcion a utilizar: ";
    cin>>opcion;

     switch (opcion) {
        case 1:
            cout<<"----------Suma----------"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            cout<<"Resultado: "<<sumar(n1,n2)<< endl;
            break;

        case 2:
            cout<<"----------Resta---------"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;        
            cout<<"Resultado: "<<restar(n1,n2)<< endl;
            break;
            
        case 3:
            cout<<"-----Multiplicacion-----"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            cout<<"Resultado: "<<multiplicar(n1,n2)<< endl;
            break;

        case 4:
            cout<<"--------Division--------"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            dividir(n1,n2);
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;

}
}