#include<iostream>
using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    if(y == 0){
        //bloco de comandos - condição verdadeira
        cout << "Condição é verdadeira";
        if(x != 0){
             //bloco de comandos - condição verdadeira
            cout << "Condição é verdadeira";
        }
        else {
            //bloco de comandos condição falsa
            cout << "Condição é falsa";
        }
    }
    else {
        //bloco de comandos condição falsa
        cout << "Condição é falsa";
    }

    cout << "Saindo..." <<endl;


    return 0;
}