#include <iostream>
using namespace std;
    int main(){

        float pi = 3.1416 ;
        float raio;
        float area_circulo;


        cout << "Diga me um raio para fazer o calculo da area do circulo \n";
        cin  >> raio;
        area_circulo = (pi*raio*raio);

        cout << "A area do circulo e igual a " << area_circulo;


return 0;
}
