#include<iostream>
using namespace std;

int main(){

    int x = 0;
    int y = 1;

    if(x != 0){

        cout << "X diferente de zero" <<endl;

        if(y != 0){
            cout << "Y diferente de zero" <<endl;
        } else {
            cout << "Y � igual zero" << endl;
        }
    }
    else{
        cout << "X � igual zero" << endl;
        if(y != 0){
            cout << "Y diferente de zero" <<endl;
        } else {
            cout << "Y � igual zero" << endl;
        }
    }

    return 0;
}
