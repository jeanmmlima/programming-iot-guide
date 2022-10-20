#include<iostream>
using namespace std;

int main(){

    bool clima;
    bool terDinheiro;

    cout << "Acorde!" <<endl;
    cout << "Está fazendo sol? Responta 1 - Sim ou 0 - Não" <<endl;
    cin >> clima;

    cout << "Você tem dinheiro? Responta 1 - Sim ou 0 - Não" <<endl;
    cin >> terDinheiro;

    if(clima == 1){
        if(terDinheiro){
            cout << "Vai à praia!" <<endl;
        }
        else{
            cout << "Vai ao bosque!" <<endl;
        }
        
    }
    else {
         cout << "Lê jornal!" <<endl;
         cout << "Dorme" <<endl;
         cout << "Acorda" <<endl;
    }

    cout << "Almoça..." <<endl;


    return 0;
}