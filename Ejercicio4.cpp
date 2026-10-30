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
        return div;     
    }else{
        cout<<"Math ERROR. El divisor no puede ser 0."<<endl;
    }

}

int main(){
    int opcion;
    float n1, n2, sum, rest, multi, div;

    cout<<"---------Calculadora--------"<<endl;
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
            sum=sumar(n1,n2);
            cout<<"Resultado: "<<sum<< endl;
            break;

        case 2:
            cout<<"----------Resta---------"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            rest=restar(n1,n2);
            cout<<"Resultado: "<<rest<< endl;
            break;
            
        case 3:
            cout<<"-----Multiplicacion-----"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            multi=multiplicar(n1,n2);
            cout<<"Resultado: "<<multi<< endl;
            break;

        case 4:
            cout<<"--------Division--------"<<endl<<endl;
            cout<<"Ingresar primer numero: ";
            cin>> n1;
            cout<<"Ingresar segundo numero: ";
            cin>> n2;
            div=dividir(n1,n2);
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;

}
}