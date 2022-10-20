#include<stdio.h>
#include <stdlib.h>
int main ( ) {
    float a = 80000;
    float b = 200000;
    int cont = 0;

    while(a < b){
        a = a * 1.03;
        b = b * 1.015;
        cont++;
    }

    printf("%d",cont);
}