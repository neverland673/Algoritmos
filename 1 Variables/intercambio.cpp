#include <iostream>


using namespace std;

void intercambioSimple();

void intercambioDoble();


void intercambioTriple();

int main()
{
    //intercambioSimple();
    //intercambioDoble();
    intercambioTriple();
}

void intercambioSimple(){

    int x;
    int y;

    cout<<"Ingresa X: ";
    cin>>x;
    cout<<"Ingresa Y: ";
    cin>>y;

    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    int *a=&x;
    int *b=&y;
    int temp = *a;
    *a = *b;
    *b = temp;

    cout<<"\nIntercambio Simple: \n";

    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}

void intercambioDoble(){

    int x;
    int y;

    cout<<"Ingresa X: ";
    cin>>x;
    cout<<"Ingresa Y: ";
    cin>>y;

    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    int *x1 = &x;
    int *y1 = &y;

    int **a=&x1;
    int **b=&y1;

    int *temp = *a;
    *a = *b;
    *b = temp;

    cout<<"\nIntercambio Doble: \n";

    cout<<"X: "<<*x1<<endl;
    cout<<"Y: "<<*y1<<endl;

}


void intercambioTriple(){

    int x;
    int y;

    cout<<"Ingresa X: ";
    cin>>x;
    cout<<"Ingresa Y: ";
    cin>>y;

    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    int *x1 = &x;
    int *y1 = &y;

    int **xx1=&x1;
    int **yy1=&y1;

    int ***xxx1=&xx1;
    int ***yyy1=&yy1;

    int *temp = **xxx1;
    **xxx1 = **yyy1;
    **yyy1 = temp;

    cout<<"\nIntercambio Doble: \n";

    cout<<"X: "<<*x1<<endl;
    cout<<"Y: "<<*y1<<endl;

}
