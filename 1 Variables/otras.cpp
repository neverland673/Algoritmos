#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

float pi=3.141592;

double volEsfera(double);

double promedio(float, float, float);

int main()
{
    while(true){
        int valor;
        cout<<"Eliga un opcion, siguiente: \n";
        cout<<"(1) Volumen de una esfera. \n";
        cout<<"(2) Promedio de notas \n";
        cin>>valor;
        cout<<endl;
        switch(valor){
            case 1:
                int n;
                cout<<"Ingrese un r, para hallar el volumen: ";
                cin>>n;
                cout<<"El volumen de la esfera es: "<<volEsfera(n);
                cout<<endl;
                break;
            case 2:
                float nota1;
                float nota2;
                float nota3;
                cout<<"Ingrese la nota 1: ";
                cin>>nota1;
                cout<<"Ingrese la nota 2: ";
                cin>>nota2;
                cout<<"Ingrese la nota 3: ";
                cin>>nota3;
                cout<<"El promedio de notas es: "<<promedio(nota1,nota2,nota3);
                cout<<endl;
                break;
            default:
                system("cls");
                cout<<"Opcion no valida.\n\n";
                continue;
        }
        break;
    }

}

double volEsfera(double radio){
    return (4.0/3.0)*pi*pow(radio,3);
}

double promedio(float nota1, float nota2, float nota3){
    return (nota1+nota2+nota3)/3.0;
}

