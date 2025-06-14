#include <stdio.h>

int main() {
    int a, b, c;
    int *ponteiros[3];  // Vetor de ponteiros para inteiros

    // Leitura dos valores
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Armazenando os endereços no vetor de ponteiros
    ponteiros[0] = &a;
    ponteiros[1] = &b;
    ponteiros[2] = &c;

    // Impressão dos valores apontados pelos ponteiros
    for (int i = 0; i < 3; i++) {
        printf("Valor armazenado no ponteiro[%d]: %d\n", i, *ponteiros[i]);
    }

    return 0;
}