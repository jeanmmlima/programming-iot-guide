#include <stdio.h>

int main()
{
    int notas[5];

    notas[4] = 10;
    notas[0] = 7;
    notas[1] = notas[0] + 2;
    notas[2] = notas[1] - notas[0];
    notas[3] = notas[4] * 2;

    for(int i = 0; i < 5; i++){
        printf("O valor do vetor notas na posição %i é igual a: %i \n", i, notas[i]);
    }

    int numeros[5];

    for(int i = 0; i < 5; i++){
        numeros[i] = 2 * i;
    }

    for(int i = 0; i < 5; i++){
        printf("O valor do vetor numeros na posição %i é igual a: %i \n", i, numeros[i]);
    }


    return 0;
}
