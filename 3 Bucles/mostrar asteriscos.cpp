#include <iostream>

using namespace std;

void Pedirnumero();

int numero;

int main()
{
    Pedirnumero();

    cout<<endl;
    cout<<endl;
    //triangulo
    for(int i=1;i<=numero/2+1;i++){
        for(int j=0;j<i*2-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=numero/2+1;i++){
        for(int j=numero-2*i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    //triangulo
    for(int i=1;i<=numero/2+1;i++){
        for(int k=1;k<=numero/2+1-i;k++){
                cout<<" ";
            }
        for(int j=1;j<=i*2-1;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    //parte inferior
    for(int i=1;i<=numero/2+1;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=numero-2*i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Pedirnumero(){
    cout<<"Ingresa numero entero: ";
    cin>>numero;
}
