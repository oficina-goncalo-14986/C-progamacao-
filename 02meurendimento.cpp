#include <iostream>
using namespace std;
    int main(){
        float ganho_hora, horas_trabalhadas , ganho_mes, ganho_ano;



        cout << "Quanto que ganha por hora  \n";
        cin  >> ganho_hora;
        cout << "Quantas horas trabalha por mes  \n";
        cin  >> horas_trabalhadas;

        ganho_mes = ganho_hora * horas_trabalhadas;
        ganho_ano = ganho_mes  * 12;

        cout << "Voce ganha " << ganho_mes << " euros por mes e ganha " << ganho_ano << " euros por ano";


return 0;
}




