#include <iostream>
using namespace std;

    int main() {
        int opcao;


    for(int i=0; i < 1; i=0 ) {
        cout << "Escolha entre 1 e 3 \n ";
        cout << "0- Sair\n ";
        cin >> opcao;

            switch (opcao){

                case 0:
                    break;
                case 1:
                    cout << " Es um bom programador " << endl;
                    break;
                case 2:
                    cout << " Es muito bom programador " << endl;
                    break;
                case 3 :
                    cout << " Es excelente programador" << endl;
                    break;
                default  :
                    cout << " Nao sei o que me estas a pedir " << endl;
                    break;

                            }
                if (opcao == 0)break;
                                }


    return 0;
    }

