#include <iostream>
#include <string>

using namespace std;

bool bisiesto(int );

int main()
{
    int anio,mes;
    cout<<"Ingresa anio: ";
    cin>>anio;
    cout<<"Ingresa mes: ";
    cin>>mes;

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    string diaSemanaAnio[] = {"Lun", "Mar", "Mie", "Jue", "Vie", "Sab", "Dom"};

    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    if(bisiesto(anio)){
        diasMes[1] = 29;
    }
    cout<<"FEB: "<<diasMes[1]<<endl;

    int diaSemana=1;

    for(int i=1601;i<anio;i++){
        if(bisiesto(i))
            diaSemana+=2;
        else
            diaSemana+=1;
        if(diaSemana>7)
            diaSemana -=7;
    }
    cout<<"DIA SEMANA: "<<anio<<": "<<diaSemanaAnio[diaSemana-1];

    int diaMesInicio=diaSemana;

    for(int i=0;i<mes-1;i++){
        diaMesInicio+=diasMes[i];
    }

    diaMesInicio = ((diaMesInicio-1)%7)+1;

    cout<<"\n"<<meses[mes-1]<<" - "<<anio<<endl;
    for (int i=0; i<7; i++) {
       cout<<diaSemanaAnio[i]<<" ";
    }
    cout << endl;

    int diaActual=1;

    for (int i=1; i<diaMesInicio; i++){
       cout<<"    ";
    }

    for (int i=diaMesInicio; diaActual<=diasMes[mes-1]; i++){
       if(diaActual<10)
            cout<<"  "<<diaActual<<" ";
       else
            cout<<" "<<diaActual<<" ";

       if(i%7==0)
            cout<<endl;

       diaActual++;
    }
    cout<<endl;
}

bool bisiesto(int anio){
    if(anio>=1601){
        if((anio%4==0 && anio%100!=0) || anio%400==0)
            return true;
    }
    return false;
}
