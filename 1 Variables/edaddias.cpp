#include <iostream>
#include <ctime>

using namespace std;


void edadDias();

void edadExacta();

int main()
{
    //edadDias();
    edadExacta();
    return 0;
}

void edadExacta(){

    int diastotal;
    int anioInput;
    int mesInput;
    int diaInput;

    cout<<"Ingresa anio: ";
    cin>>anioInput;

    cout<<"\nIngresa mes: ";
    cin>>mesInput;

    cout<<"\nIngresa dia: ";
    cin>>diaInput;

    time_t t = time(NULL);

    tm* ahora = localtime(&t);

    int anioact = ahora->tm_year+1900;
    int mesact = ahora->tm_mon+1;
    int diaact = ahora->tm_mday;

    int bisiestos=0;

    cout<<"La fecha actual es: " <<diaact<<"/"<<mesact<<"/"<<anioact<<endl;

    //nac
    int diasNac = anioInput*365+diaInput;

    int diasMesNac[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((anioInput%4==0 && anioInput%100!=0) || anioInput%400==0){
        diasMesNac[1]=29;
    }

    for(int i=0;i<mesInput-1;i++){
        diasNac+=diasMesNac[i];
    }

    //actual
    int diasAct = anioact*365+diaact;

    int diasMesAct[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((anioact%4==0 && anioact%100!=0) || (anioact%400==0)) {
        diasMesAct[1]=29;
    }

    for (int i=0; i<mesact-1; i++) {
        diasAct+=diasMesAct[i];
    }

    for (int i=anioInput; i<anioact; i++) {
        if ((i%4==0 && i%100!=0) || (i%400==0)) {
            bisiestos++;
        }
    }

    diasAct += bisiestos;

    diastotal = diasAct-diasNac;

    cout<<"Tu total de dias en vida es: "<<diastotal<<" dias.";

}


void edadDias(){

    int edad;
    int anio;
    int diast;
    int temp=0;

    cout<<"Ingresa edad: ";

    cin>>edad;

    anio=2025-edad;

    cout<<"Ano "<<anio<<endl;


    for(int i=anio;i<2025;i++){
        if((i%4==0 && i%100!=0) || anio%400==0){
            temp+=1;
        }
    }

    diast=edad*365+temp;

    cout<<"La edad en dia es: "<<diast;

}
