#include <iostream>
#include <cmath>

using namespace std;

void Pedirnumero();

int numero;

bool primo(int);

int main()
{
    //Pedirnumero();

    for(int i=2;i<100;i++){

    if(primo(i))
        cout<<i<<" si, \n";
    else
        cout<<i<<" no, \n";
    }
}

bool primo(int n){
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;

    for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0){
                return false;
            }
        }

    return true;
}

void Pedirnumero(){
    cout<<"Ingresa numero entero: ";
    cin>>numero;
}
