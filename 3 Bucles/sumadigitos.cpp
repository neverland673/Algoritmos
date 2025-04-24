#include <iostream>

using namespace std;

//int FactorialRecursiva(int );

void SumaDigitos();

void Pedirnumero();

int numero;

int main()
{
    Pedirnumero();
    SumaDigitos();
}

void SumaDigitos(){
    cout<<numero<<" -> ";

    int DIG[10];
    int i=0;
    int suma=0;
    while(numero>0){
        DIG[i]=numero%10;
        numero=numero/10;
        i++;
    }
    for(int j=i-1;j>=0;j--){

        cout<<DIG[j];
        if(j!=0)
            cout<<" + ";
        suma = suma+DIG[j];
    }
    cout<<" = "<<suma;
}

void Pedirnumero(){
    cout<<"Ingresa numero entero: ";
    cin>>numero;
}
