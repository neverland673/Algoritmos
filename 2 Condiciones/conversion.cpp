#include <iostream>
#include <map>

using namespace std;

double conversion(double);

int main()
{
    double F;
    cout<<"Fahrenheit: ";
    cin>>F;

    if(F<-459.67){
        cout<<"Valor no valido, ya sobrepaso el cero absoluto";
    }

    else{
        cout<<"F A C es igual a: ";
        cout<<conversion(F);
    }

}

double conversion(double F){
    double C;
    C=(F-32)*(5.0/9.0);
    return C;
}
