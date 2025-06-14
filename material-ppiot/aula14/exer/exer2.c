#include <stdio.h>

// Função que troca os valores de duas variáveis usando ponteiros
void trocarValores(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Leitura dos valores
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Chamada da função para trocar os valores
    trocarValores(&a, &b);

    // Impressão dos novos valores
    printf("Após a troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}