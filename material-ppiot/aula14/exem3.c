#include <stdio.h>

int main() {
    int meuVetor[5] = {10, 20, 30, 40, 50};
    int *meuPonteiro = meuVetor;

    for (int i = 0; i < 5; i++) {
        printf("meuVetor[%d] = %d, *(meuPonteiro + %d) = %d, meuPonteiro[%d] = %d\n", 
               i, meuVetor[i], i, *(meuPonteiro + i), i, meuPonteiro[i]);
    }

    return 0;
}