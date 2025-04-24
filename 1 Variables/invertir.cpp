#include <iostream>
#include <string>
using namespace std;


double areaTriangulo(float, float);

void invertir();

int main()
{

    cout<<"Area de Triangulo: "<<areaTriangulo(3,4)<<endl;
    invertir();

}

void invertir(){
    string invertir;
    cout<<"Ingrese numero o caracter: ";
    getline(cin,invertir);

    int tamanio = invertir.length();

    cout<<"Original: "<<invertir<<endl;

    cout<<"Invertido: ";
    for(int i=tamanio;i>0;i--){
        cout<<invertir[i-1];
    }
}


double areaTriangulo(float a, float b){
    return (a*b)/2.0;
}
