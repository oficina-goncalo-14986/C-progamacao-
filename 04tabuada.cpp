#include <iostream>
using namespace std;
    int main(){
        float numero_para_calcular;
        int i = 1;
        float tabuada;

    cout << "Diz me um numero para fazer a tabuada ate 10  ";
    cin  >> numero_para_calcular;

    for ( i = 1; i <= 10; i++){
        tabuada = i * numero_para_calcular;
        cout << tabuada << "\n";
    }

return 0;
}
