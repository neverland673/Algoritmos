#include <iostream>

using namespace std;

int FactorialRecursiva(int );

void FactorialBucle();

void Pedirnumero();

int numero;

int main()
{
    Pedirnumero();
    cout<<numero<<" ! = ";
    cout<<FactorialRecursiva(numero)<<endl;
    FactorialBucle();
}

int FactorialRecursiva(int n){
    if(n<2){
        cout<<n<<" = ";
        return 1;
    }
    else
        cout<<n<<" x ";
        return n*FactorialRecursiva(n-1);
}

void FactorialBucle(){
    cout<<numero<<" ! = ";
    int fact=1;
    for(int i=numero;i>1;i--){
        fact=fact*i;
        cout<<i<<" x ";
    }
    cout<<"1 = "<<fact;
}

void Pedirnumero(){
    cout<<"Ingresa numero entero: ";
    cin>>numero;
}
