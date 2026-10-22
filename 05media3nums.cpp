#include <iostream>
using namespace std;
    int main(){
        float numero_1, numero_2, numero_3;
        float media;

        cout << "Diz me um numero para fazer a media \n";
        cin  >> numero_1;
        cout << "Diz me um segundo numero para fazer a media \n";
        cin  >> numero_2;
        cout << "Diz me um terceiro numero para fazer a media \n";
        cin  >> numero_3;

        media = (numero_1 + numero_2 + numero_3 ) / 3;

        cout << "A tua media e igual a " << media;

return 0;
}
