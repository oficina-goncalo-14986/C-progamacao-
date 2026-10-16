#include <iostream>
using namespace std;

int main () {
    float graus_F;

    cout << " Diz me a temperatura em Farenheit para converter em Celsius: \n";
    cin  >> graus_F;
    cout << " A temperatura e de " <<  (5 * (graus_F -32) / 9);

return 0;
}
