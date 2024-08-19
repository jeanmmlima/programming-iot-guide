#include <stdio.h>

int main() {
    int valor;

    // Solicita ao usuário para inserir um valor inteiro
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);

    // Exibe a tabuada do valor, um printf para cada multiplicação
    printf("%d x 1 = %d\n", valor, valor * 1);
    printf("%d x 2 = %d\n", valor, valor * 2);
    printf("%d x 3 = %d\n", valor, valor * 3);
    printf("%d x 4 = %d\n", valor, valor * 4);
    printf("%d x 5 = %d\n", valor, valor * 5);
    printf("%d x 6 = %d\n", valor, valor * 6);
    printf("%d x 7 = %d\n", valor, valor * 7);
    printf("%d x 8 = %d\n", valor, valor * 8);
    printf("%d x 9 = %d\n", valor, valor * 9);
    printf("%d x 10 = %d\n", valor, valor * 10);

    return 0;
}
