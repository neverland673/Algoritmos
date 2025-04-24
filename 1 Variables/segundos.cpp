#include <iostream>
#include <string>

using namespace std;

void convertirFecha();

int toInt(string s) {
    int num = 0;
    for (int i = 0; i < s.length(); i++) {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

int main()
{
    convertirFecha();
}

void convertirFecha(){

    string fechaHora;
    cout<<"Ingresa fecha y hora (DD-MM-YYYY HH:MM ss mss): ";
    getline(cin, fechaHora);

    int dia = toInt(fechaHora.substr(0, 2));
    int mes = toInt(fechaHora.substr(3, 2));
    int anio = toInt(fechaHora.substr(6, 4));
    int hora = toInt(fechaHora.substr(11, 2));
    int minuto = toInt(fechaHora.substr(14, 2));
    int segundo = toInt(fechaHora.substr(17, 2));
    int milisegundo = toInt(fechaHora.substr(20, 3));

    cout<<"La fecha extraida es: "<<dia<<"/"<<mes<<"/"<<anio<<" ";
    cout<<hora<<":"<<minuto<<":"<<segundo<<"."<<milisegundo<<endl;

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long long totalDias = 0;

    for(int y=1970; y<anio; y++){
        totalDias += 365;
        if((y%4==0 && y%100!=0) || (y%400==0)){
            totalDias++;
        }
    }

    if((anio%4==0 && anio%100!=0) || (anio%400==0)){
        diasMes[1] = 29;
    }

    for(int m=0; m<mes-1; m++){
        totalDias += diasMes[m];
    }

    totalDias += dia - 1;

    long long totalSegundos = totalDias * 24LL * 60 * 60 + hora * 3600 + minuto * 60 + segundo;
    long long totalMilisegundos = totalSegundos * 1000 + milisegundo;

    cout<<"La conversion (DD-MM-YYYY HH:MM ss mss) desde 1970-01-01:"<<endl;
    cout<<"Segundos: "<<totalSegundos<<" s"<<endl;
    cout<<"Milisegundos: "<<totalMilisegundos<<" ms"<<endl;

}
