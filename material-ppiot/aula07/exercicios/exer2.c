#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicita que o usuário insira o número até o qual deseja a tabuada
    printf("Digite um número para calcular a tabuada de 2 até esse número: ");
    scanf("%d", &numero);

    // Laço while para calcular e imprimir a tabuada de 2 até o número fornecido
    while (i <= numero) {
        printf("2 x %d = %d\n", i, 2 * i);
        i++;  // Incrementa o valor de i
    }

    return 0;
}