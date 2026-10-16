#include <iostream>
using namespace std;

int main () {

    float resultado_1,resultado_2,resultado_3;
    int x,y;
    float z;

    cout << "Da me um numero inteiro: \n";
    cin  >> x;
    cout << "Da me outro numero inteiro: \n";
    cin  >> y;
    cout << "Da me um numero real:  \n";
    cin  >> z;
    cout << "  \n";


    resultado_1 = (y*2)*(x/ 2.0);

    cout << resultado_1 << "\n";

    resultado_2 = (3*z+x);

    cout << resultado_2 << "\n";

    resultado_3 =  (z * z * z) ;

    cout << resultado_3;


return 0;
}
