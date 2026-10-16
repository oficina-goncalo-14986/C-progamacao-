#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Tu tens entered " << argc
         << " argumentos:" << endl;


    int i = 0;
    while (i < argc) {
        cout << "Argumento " << i + 1
             << ": " << argv[i]
             << endl;
        i++;
    }

    return 0;
}
