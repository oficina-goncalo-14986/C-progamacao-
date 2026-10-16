#include <iostream>
using namespace std;

int main () {
    float ganho_por_hora;
    float horas_trabalhadas;
    float resultado;

    cout << " Quanto que ganha por hora: \n";
    cin  >> ganho_por_hora;
    cout << "Quantas horas trabalhas por mes: \n";
    cin  >> horas_trabalhadas;
    resultado = horas_trabalhadas * ganho_por_hora;

    cout << " Ganhas " << resultado << " por mes e " <<  resultado * 12 << " por ano";


return 0;
}

