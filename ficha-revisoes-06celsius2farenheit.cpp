#include <iostream>
using namespace std;

int main () {
    float graus_c;

    cout << " Diz me a temperatura em Celsius para converter em Farenheit: \n";
    cin  >> graus_c;
    cout << " A temperatura e de " <<  ( ( graus_c * 9 / 5 ) + 32);

return 0;
}
