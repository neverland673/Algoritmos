#include <iostream>
#include <string>

using namespace std;


void sueldo();

enum Cargo{
    Disenador = 2100,
    Analista = 2400,
    Desarrollador = 2500,
    Vendedor = 2700
};

int main()
{
    sueldo();
    return 0;
}

void sueldo(){
    string nombre;
    int opcioncargo;
    int sueldo;
    int horas;
    Cargo cargo;


    cout<<"Ingresa nombre: ";
    getline(cin,nombre);

    cout<<"Ingesa horas trabajadas: ";
    cin>>horas;


    do{
        cout<<"Ingresa cargo:\n";
        cout<<"1=Disenador:\n";
        cout<<"2=Analista:\n";
        cout<<"3=Desarrollador:\n";
        cout<<"4=Vendedor: \n";
        cin>>opcioncargo;

        switch (opcioncargo) {
            case 1:
                cargo=Disenador;
                break;
            case 2:
                cargo=Analista;
                break;
            case 3:
                cargo=Desarrollador;
                break;
            case 4:
                cargo=Vendedor;
                break;
            default:
                cout <<"Elija otra opcion"<<endl;
                continue;
            }
            break;

    }while(true);

    sueldo=horas*cargo;

    cout<<"El sueldo total de "<<nombre<<"con un total de\n"<<horas<<" trabajadas"<<" es de: S/."<<sueldo<<endl;

}
