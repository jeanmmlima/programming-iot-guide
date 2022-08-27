#include <iostream>
using namespace std;
#define PRECO 1.99 //macro

int main(void){

    //declarando variáveis: tipo e nome
    //e atribuindo valores
    int quantidade = 3;
    char qualidade = 'A';
    float peso = 0.653;

    //exibindo o valor das variáveis
    cout << "Quanidade " << quantidade  << " de qualidade " 
         << qualidade << ", pesando " << peso << " quilos." << endl;

    cout << "O preco por quilo é R$"  << PRECO << ", o total é R$" 
         << peso * PRECO << endl;

    return 0;

}