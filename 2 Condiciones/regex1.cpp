#include <iostream>
#include <string>

using namespace std;

bool valorA=false;
bool valorb=false;
bool valorN=false;
bool valorE=false;

int main()
{
    string contra;

    cout<<"Regex contrasena\n";

    cout<<"Ingrese contrasena: ";

    getline(cin,contra);
    int lon;
    lon=contra.length();

    string caracteresEspeciales = " !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";

    for(int i=0;i<lon;i++){
        if(lon>7){
            if (caracteresEspeciales.find(contra[i]) != string::npos)
                valorE = true;
            if(contra[i]>='A'&&contra[i]<='Z')
                valorA=true;
            if(contra[i]>='a'&&contra[i]<='z')
                valorb=true;
            if(contra[i]>='0'&&contra[i]<='9')
                valorN=true;
        }
        else{
            cout<<"La contrasena es de "<<lon<<" caracter(es), debe ser mayor o igual a 8.";
            return 0;
        }
    }

    if(valorA&&valorb&&valorN&&valorE){
        cout<<"Contraseña valida";
    }

    else
        cout<<"Contraseña invalida";

}
