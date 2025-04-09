#include <iostream>

using namespace std;

void hola();

int FactorialRecursiva(int );

int main()
{
    cout<<FactorialRecursiva(5);
    hola();
}

int FactorialRecursiva(int n){
    if(n<2)
        return 1;
    else
        return n*FactorialRecursiva(n-1);
}

void hola(){
    cout<<"\nHola mundo";
}
