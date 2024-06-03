#include<iostream>

using namespace std;
//Las funciones se declaran antes del main
float suma(float x, float y){
    return x+y;
}

float resta(float x,float y){
    return x-y;
}

float multiplicacion(float x,float y){
    return x*y;
}

float division(float x,float y){
    return x/y;
}

int main(){
    //Dividir el problema complejo en problemas mas pequeños
    float a = 0, b=0;
    int opc = 0;//Declarar variables para programa
    //Ingreso primer numero
    cout<<"Ingrese un numero entero a= ";
    cin>>a;
    //Ingreso segundo numero
    cout<<"Ingrese un numero entero b= ";
    cin>>b;

    cout<<"Elija que opción desea \n\t1. sumar\n\t2. restar\n\t";
    cout<<"3. multiplicar\n\t4.dividir\n\tOtro numero: Salir\n";
    cout<<"Su opcion es: ";
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"El resultado de "<<a<<" + "<<b<<" = "<< suma(a,b);
        break;

    case 2:
        cout<<"El resultado de "<<a<<" - "<<b<<" = "<< resta(a,b);
        break;

    case 3:
        cout<<"El resultado de "<<a<<" * "<<b<<" = "<< multiplicacion(a,b);
        break;

    case 4:
        cout<<"El resultado de "<<a<<" / "<<b<<" = "<< division(a,b);
        break;
    
    default:
    cout<<"No hacer nada";
        break;
    }

    return 0;
}