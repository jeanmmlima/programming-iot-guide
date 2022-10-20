#include<iostream>
using namespace std;

int main(){

    int operacao;
    float a, b;

    cout << "Informe os numeros: " <<endl;
    cin >> a >> b;

    cout << "Escolha a operação? Responta: 1 - soma ou 2 - subtracao ou 3 - divisao ou 4 - multiplicacao" <<endl;
    cin >> operacao;

    if(operacao == 1){
        cout << a + b << endl; 
    } 
    else if(operacao == 2) {
         cout << a - b << endl;
    }
    else if(operacao == 3){
        cout << a * b << endl;
    }
    else if(operacao == 4){
        cout << a / b << endl;
    }
    else{
        cout << "Operação inválida, tente novamente!" <<endl;
    }

    cout << "Fim..." <<endl;


    return 0;
}