#include<iostream>
using namespace std;

int main(){

    int quantidade = 15;

    //meu primeiro comentario
    cout << "Ola, mundo!" << endl;
    cout << quantidade << endl;

    quantidade = 1000;

    cout << "Novo valor: " << quantidade << endl;

    cout << "Digite o novo valor: ";

    //lendo valor do terminal
    cin >> quantidade;

    cout << "Novo valor do usuário: " << quantidade << endl;


    return 0;
}
