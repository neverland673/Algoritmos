#include <iostream>

using namespace std;

void Bisiesto(int);

int main()
{
    cout << "\tBucles\n" << endl;

    Bisiesto(2000);
}

void Bisiesto(int n){
    if(n<1970){
        cout<<"Ingrese un anio valido";
    }
    else{
        if(n%4==0)
            cout<<"\t"<<n<<" , ES bisiesto\n";
        else
            cout<<"\t"<<n<<" , NO es bisiesto";
    }
}
