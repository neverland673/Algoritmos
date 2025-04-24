#include <iostream>
#include <map>

using namespace std;

map<int, string> diasemana;

void declarar();

int main()
{
    int dia;
    cout<<"Dia: ";
    cin>>dia;

    declarar();

    if(dia>0&&dia<=7)
        cout<<"El dia es: "<<diasemana[dia];
    else
        cout<<"Dia no valido";
}

void declarar(){

    diasemana[1]="Lunes";
    diasemana[2]="Martes";
    diasemana[3]="Miercoles";
    diasemana[4]="Jueves";
    diasemana[5]="Viernes";
    diasemana[6]="Sabado";
    diasemana[4]="Domingo";

}

