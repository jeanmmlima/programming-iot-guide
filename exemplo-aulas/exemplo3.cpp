#include<iostream>
using namespace std;

 int main(){

    int a;
    int b;

    cout << "Informe a: ";
    cin >> a;

    cout << "Informe b: ";
    cin >> b;

    cout << a + b << endl;

    int soma = a + b;

    cout << "Soma: " << soma << endl;

    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << "Lidando com operadores relacionais" << endl;

    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;


    return 0;
 }
