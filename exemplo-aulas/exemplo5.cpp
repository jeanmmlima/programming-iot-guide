#include<iostream>
using namespace std;

int main(){

    int a, b;
    int operacao;

    cout << "Informe os valores a processar: " <<endl;

    cin >> a >> b;

    cout << "Informe a operacao desejada: 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao " << endl;
    cin >> operacao;

     if(operacao == 1){
        cout << "Soma: " << a + b << endl;
     }
     else if(operacao == 2){
        cout << "Subtracao: " << a - b << endl;
     }
     else if(operacao == 3){
       cout << "Multiplicacao: " << a * b << endl;
     }
     else if(operacao == 4){
        cout << "Divisao: " << a / b << endl;
     }
     else{
        cout << "Operacao invalida! Tente novamente" << endl;
     }


    return 0;
}
