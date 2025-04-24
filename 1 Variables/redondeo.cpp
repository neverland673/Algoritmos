#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a;
    double b;
    double res;


    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;

    res=a/b;

    cout<<"Division: "<<res;
    res = int(res*100+0.50)/100.0;

    cout<<"\nRedondeo: "<<res;

}
