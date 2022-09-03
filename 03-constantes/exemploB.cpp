#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    i++;
    cout << i << endl; //incrmento em i. i passa ter valor 1
    i = i + 1;   // mais um incremento em i. passa a ter valor 2
    cout << i << endl; 

    i--;        //decremento em i, era 2 passa a ser 1 novamente
    cout << i << endl;
    i = i - 1;  //outro decremento em i, de 1 vai para zero.
    cout << i << endl;

    return 0;
    
}