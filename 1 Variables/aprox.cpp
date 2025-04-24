#include <iostream>
#include <string>

using namespace std;

int main()
{
    //3.335
    double a=1.1111111111111;
    double b=2.000000001;
    double suma1;
    double suma2;
    double suma3;

    suma1=a+b;

    suma2=a+b;

    suma3=suma1-suma2;

    //division entre 0.1
    //almacenar y solo tomar los 2 ultimos
    // y si es 9 el tercero redondear el 2 y el 1ro sucesivamente
    //primero solo tomar 2 nada mas
    //0.355

    cout<<"La suma1 es: ";
    cout<<suma1<<endl;

    cout<<"La suma2 es: ";
    cout<<suma2<<endl;

    cout<<"La suma3 es: ";
    cout<<suma3<<endl;

    int redondeo=suma3/0.01;

    float redondeo1;

    redondeo1 = redondeo/100;


    cout<<"redondeo: "<<redondeo1;

}
