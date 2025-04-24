#include <iostream>

using namespace std;

bool Bisiesto(int);

int main()
{
    int anio;
    cout<<"Ingresa anio: ";
    cin>>anio;
    if(Bisiesto(anio))
        cout<<"Es bisiesto";
    else
        cout<<"No, es bisiesto";
}

bool Bisiesto(int n){
    if((n%4==0&&n%100!=0)||n%400==0)
        return true;
    else
        return false;
}
