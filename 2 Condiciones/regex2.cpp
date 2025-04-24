#include <iostream>
#include <string>

using namespace std;

bool parte1=false;
bool parte2=false;
bool parte3=false;
bool parte4=false;

int main()
{
    string correo;

    cout<<"Regex correo\n";

    cout<<"Ingrese correo: ";

    getline(cin,correo);

    int longitud;

    longitud=correo.length();

    string caracteres = ".-_";
    int contc = 0;
//parte1 local12-
//parte2 @
//parte3 dominio
//parte4 .com
//de1@gmail.com
    for(int i=0;i<longitud;i++){
        if(longitud>11){
            if(correo[i]=='@')
                contc+=1;
        }
    }
    for(int i=0;i<longitud;i++){
        if(longitud>7){
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
            cout<<"La contrasena es de "<<longitud<<" caracter(es), debe ser mayor o igual a 8.";
            return 0;
        }
    }

    if(parte1==true){
        cout<<"Correo valido";
    }

    else
        cout<<"Correo invalido";

}
