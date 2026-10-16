#include <iostream>
using namespace std;

int main () {

    float peso;
    float acelaracao_da_gravidade;
    float massa;

    cout << " Diz me o numero do peso: \n";
    cin  >> peso;
    cout << " Diz me o numero do acelaracao da gravidade: \n";
    cin  >> acelaracao_da_gravidade;

    massa = peso / acelaracao_da_gravidade;

    cout << massa;


return 0;
}
