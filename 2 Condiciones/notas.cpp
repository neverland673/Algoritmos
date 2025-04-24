#include <iostream>

using namespace std;

void nota();

int main()
{
    nota();
}

void nota(){
    int n;
    cout<<"Ingrese nota: ";
    cin>>n;

    if(n>=0&&n<=10){
        cout<<"Reprobado";
    }
    else if(n>10&&n<=13){
        cout<<"Regular";
    }
    else if(n>13&&n<=17){
        cout<<"Bueno";
    }
    else if(n>17&&n<=20){
        cout<<"Excelente";
    }
    else
        cout<<"Nota incorrecta";
}
