#include <iostream>
using namespace std;

int mayor(int a, int b, int c){
      int num;
    if (a>b && b>c && a>c) {
        num=a;
        cout<<"El numero mayor es "<<num<<"."<<endl;
    } else if(b>a && b>c && a>c) {
        num=b;
        cout<<"El numero mayor es "<<num<<"."<<endl;
    } else{
        num=c;
        cout<<"El numero mayor es "<<num<<"."<<endl;
    }
    return num;
}

int main(){
    int num1, num2, num3;
    cout<<"Ingrese primer numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese segundo numero: "<<endl;
    cin>>num2;
    cout<<"Ingrese tercero numero: "<<endl;
    cin>>num3;

    mayor(num1,num2,num3);
    
    return 0;
}