#include<iostream>

using namespace std;

string par(int x)
{
    int modulo = x%2;

    if (modulo == 0)
    {
        return "par";
    }
    else{
        return "impar";
    }   
}

string pos_neg(int x)
{
    if (x>0)
    {
        return "mayor que cero";
    }
    else if (x==0)
    {
        return "cero";
    }
    else
    {
        return "menor que cero";
    }
}

int main()
{
    int numero = 0;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    cout<<"El numero "<<numero<<" es "<<par(numero)<<" y es "<<pos_neg(numero);

    return 0;
}