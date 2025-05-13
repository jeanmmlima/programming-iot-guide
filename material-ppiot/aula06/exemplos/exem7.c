#include <stdio.h>

int main() {
    int a, b;

    // Solicita ao usuário que insira os valores de a e b
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a > 0) {  // Primeiro nível de condição
        if (b > 0) {  // Segundo nível de condição, dentro do primeiro if
            printf("a é positivo e b também é positivo\n");
        } else {
            printf("a é positivo, mas b não é positivo\n");
        }
    } else {
        if (b > 0) {  // Segundo nível de condição, dentro do else
            printf("a não é positivo, mas b é positivo\n");
        } else {
            printf("a e b não são positivos\n");
        }
    }

    return 0;
}