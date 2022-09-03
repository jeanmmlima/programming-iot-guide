#include <iostream>

using namespace std;

int main(){

    cout << "Operacoes de conjuncao E" << endl;
    cout << ((3 > 2) && (2 < 3)) << endl;
    cout << ((3 > 2) && (2 < 1)) << endl;
    cout << ((1 > 2) && (3 >= 3)) << endl;
    cout << ((1 > 2) && (2 < 1)) << endl;

    cout << "Operacoes de disjucao OU" << endl;
    cout << ((3 > 2) || (2 < 3)) << endl;
    cout << ((3 > 2) || (2 < 1)) << endl;
    cout << ((1 > 2) || (3 >= 3)) << endl;
    cout << ((1 > 2) || (2 < 1)) << endl;

    cout << "Operacoes de negacao !" << endl;
    cout << !((3 > 2) && (2 < 3)) << endl;
    cout << !((1 > 2) || (2 < 1)) << endl;
   
    return 0;
}