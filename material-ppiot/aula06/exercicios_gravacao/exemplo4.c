#include <stdio.h>

int main()
{
    int x, y;

    printf("Inserir x: \n");
    scanf("%i", &x);

    printf("Inserir y: \n");
    scanf("%i", &y);

    if(x > 0){

        if(y > 0){
            printf("x e y são maiores que zeros!");
        } else {
            printf("x é maior que zero, mas y não é!");
        }

    } else {

        if(y > 0){
            printf("x é menor ou igual zero, mas y é maior que zero");
        } else {
            printf("x e y são menores ou iguais a zero");
        }

    }
    return 0;
}
