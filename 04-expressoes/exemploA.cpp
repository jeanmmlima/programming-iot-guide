#include <iostream>
#include <math.h>

using namespace std;

int main(){

    //programa que calcula a potencia de um numero elevado a outro
    int x, y;

    cin >> x;
    cin >> y;

    int potencia = pow(x,y);

    cout << "Operação de potenciação" << endl;
    cout << potencia << endl;

     cout << "Raiz quadrada" << endl;
    cout << sqrt(potencia) << endl;


    return 0;
}