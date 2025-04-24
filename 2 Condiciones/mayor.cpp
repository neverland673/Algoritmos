#include <iostream>
#include <map>

using namespace std;

int A[10]={1,2,3,4,5,6,7,8,9,10};

int main()
{
    cout<<"Numeros: ";

    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    int mayor=0;
    for(int i=0;i<10;i++){
        mayor=A[i];
        if(A[i+1]>A[i])
            mayor=A[i+1];
    }
    cout<<"\nEl mayor es: "<<mayor;
}
