#include <iostream>
using namespace std;

int main () {

    string nome;
    int idade;
    string localidade;
    string genero;
    string mensagem;


    cout << "\n Diz me o teu nome: ";
    cin  >> nome ;
    cout << "\n A tua idade: ";
    cin  >> idade;
    cout << "\n A tua localidade: ";
    cin  >> localidade;
    cout << "\n O teu genero(M/F): ";
    cin  >> genero;

    if (genero == "M" ){
        mensagem = "Caro Sr.";
    }else if (genero == "M"){
        mensagem = "Cara Sra";
    }

    mensagem = mensagem + nome;

    if (idade >= 18 ){
        mensagem = mensagem + " e maior de idade ";
    }else{
        mensagem = mensagem + " e menor de idade ";
    }

    mensagem = mensagem + " e mora em ";
    mensagem = mensagem + localidade;
    cout << mensagem;

return 0;
}
