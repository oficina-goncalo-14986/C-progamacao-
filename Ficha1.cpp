#include <iostream>
using namespace std;

int main() {
    int n;

    cout << " Diz me um numero ";
    cin  >> n;

        if (n < 0) {
            cout << " Numero Negativo" << endl;
        }
        else if (n == 0) {
            cout << " Numero Neutro" << endl;
        }
        else if (n > 0 && n < 100  ) {
            cout << " Numero Positivo Pequeno " << endl;
        }
        else (n >= 100) {
            cout << " Numero Enorme " << endl;
        }





return 0;
}
