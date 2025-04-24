#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main()
{
    int Array1[110] = {0};
    int Array2[110] = {0};

    int Suma[111] = {0};

    string temp1, temp2;
    cout<<"Ingrese valor 1: ";
    getline(cin,temp1);

    cout<<"Ingrese valor 2: ";
    getline(cin,temp2);

    int tam1=temp1.length();
    int tam2=temp2.length();

    for(int i=0;i<tam1;i++){
        Array1[109-i]=temp1[tam1-1-i]-'0';
    }

    for(int i=0;i<tam2;i++){
        Array2[109-i]=temp2[tam2-1-i]-'0';
    }

    int acarreo=0;

    for(int i=109;i>=0;i--){
        int suma=Array1[i]+Array2[i]+acarreo;
        Suma[i+1]=suma%10;
        acarreo=suma/10;
    }

    Suma[0] = acarreo;
    cout<<"La suma es: ";

    int tam = abs(tam1-tam2);

    bool valorCero = false;

    for(int i=0;i<=110;i++){
        if(Suma[i]!=0)
            valorCero=true;
        if(valorCero)
            cout<<Suma[i];
    }
    if(!valorCero)
        cout<<0;

}
